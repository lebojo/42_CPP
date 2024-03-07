#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange()
{
	std::cout << "BitcoinExchange default constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange destructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
{
	*this = src;
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
	if (this != &rhs)
	{
		//Don't forget to copy the attributes here
	}
	std::cout << "BitcoinExchange assignment operator called" << std::endl;
	return *this;
}

int BitcoinExchange::initDtb(std::string filePath)
{
	std::ifstream file(filePath.c_str());
	if (!file.is_open())
	{
		std::cerr << "Failed to open the file " << filePath << " :(" << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(file, line))
	{
		std::string date = line.substr(0, line.find(","));
		std::string price = line.erase(0, date.length() + 1);
		if (date.length() == 10)
			dtb[date] = atof(price.c_str());
	}
	std::cout << "Database init success!" << std::endl;
	file.close();
	return 0;
}

int daysInMonth(int month, int year) {
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else if (month == 2) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            return 29;
        } else {
            return 28;
        }
    } else {
        return 31;
    }
}

int dateDifference(std::string date1, std::string date2) { // date1 est avant date2

	if (date1 > date2)
		std::swap(date1, date2);

    int year1 = std::atoi(date1.substr(0, 4).c_str());
    int month1 = std::atoi(date1.substr(5, 2).c_str());
    int day1 = std::atoi(date1.substr(8, 2).c_str());

    int year2 = std::atoi(date2.substr(0, 4).c_str());
    int month2 = std::atoi(date2.substr(5, 2).c_str());
    int day2 = std::atoi(date2.substr(8, 2).c_str());

    int difference = 0;
    while (year1 < year2 || month1 < month2 || day1 < day2) {
        day1++;
        if (day1 > daysInMonth(month1, year1)) {
            day1 = 1;
            month1++;
            if (month1 > 12) {
                month1 = 1;
                year1++;
            }
        }
        difference++;
    }

    return difference;
}

float BitcoinExchange::getPrice(std::string date, float price)
{
	float res = 0;

	if (dtb.find(date) != dtb.end())
		res = dtb[date] * price;
	else
	{
		std::string lower;
		std::string upper;

		std::map<std::string, float>::iterator it = dtb.end();
		it--;
		while (it != dtb.begin())
		{
			if (it->first <= date)
				break;
			it--;
		}
		lower = it->first;

		it = dtb.begin();
		while (it != dtb.end())
		{
			if (it->first >= date)
				break;
			it++;
		}
		if (it == dtb.end())
			it--;
		upper = it->first;

		res = (dateDifference(lower, date) > dateDifference(date, upper)) ?(dtb[upper] * price) :(dtb[lower] * price);
	}

	std::cout << date << ": " << price << "BTC => " << res << "$" << std::endl;
	return res;
}

int BitcoinExchange::process(std::string filePath)
{
	std::ifstream file(filePath.c_str());
	if (!file.is_open())
	{
		std::cerr << "Failed to open the file " << filePath << " :(" << std::endl;
		return 1;
	}

	std::string nline;
	while (std::getline(file, nline))
	{
		std::string line = nline;
		std::string date = line.substr(0, line.find(" | "));
		std::string price = line.erase(0, date.length() + 3);
		float fprice = atof(price.c_str());

		if (date.length() <= 0 || price.length() <= 0 || fprice == 0.0 || fprice < 0 || fprice > 1000)
			std::cout << "Error: \"" << nline << "\" can't be used" << std::endl;
		else
			getPrice(date, fprice);
	}
	file.close();
	return 0;
}