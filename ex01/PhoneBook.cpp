/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:07:34 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/04 01:46:12 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

void print(std::string str)
{
	std::cout << str << "\n";
}

void printRaw(std::string str)
{
	std::cout << str;
}

class Contact
{
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
public:
	void SetFirstName(std::string NewFirstName)
	{
		FirstName = NewFirstName;
	}
	std::string GetFirstName()
	{
		return FirstName;
	}

	void SetLastName(std::string NewLastName)
	{
		LastName = NewLastName;
	}
	std::string GetLastName()
	{
		return LastName;
	}

	void SetNickName(std::string NewNickName)
	{
		NickName = NewNickName;
	}
	std::string GetNickName()
	{
		return NickName;
	}

	void SetPhoneNumber(std::string NewPhoneNumber)
	{
		PhoneNumber = NewPhoneNumber;
	}
	std::string GetPhoneNumber()
	{
		return PhoneNumber;
	}

	void SetDarkestSecret(std::string NewDarkestSecret)
	{
		DarkestSecret = NewDarkestSecret;
	}
	std::string GetDarkestSecret()
	{
		return DarkestSecret;
	}
};

class PhoneBook
{
private:
	Contact contact[8];
	int		index;
public:
	void SetIndex(int i)
	{
		index = i;
	}
	int GetIndex()
	{
		return index;
	}
	
	void init()
	{
		SetIndex(0);
	}

	void CreateContact()
	{
		std::string	tmp;
		print("Création d'un nouveau contact!");
		print("Quel est son prénom ?");
		printRaw("->");
		std::cin >> tmp;
		contact[index].SetFirstName(tmp);
		print("Quel est son nom ?");
		printRaw("->");
		std::cin >> tmp;
		contact[index].SetLastName(tmp);
		print("Quel est son surnom (pseudo) ?");
		printRaw("->");
		std::cin >> tmp;
		contact[index].SetNickName(tmp);
		print("Quel est son n° de natel ?");
		printRaw("->");
		std::cin >> tmp;
		contact[index].SetPhoneNumber(tmp);
		print("Et maintenant, quel est son plus sombre secret ?");
		printRaw("->");
		std::cin >> tmp;
		contact[index].SetDarkestSecret(tmp);
		printRaw("Le contact ");
		std::cout << index + 1;
		print(" à été créée avec succès!");
		if (index < 7)
			index++;
		else
			index = 0;
	}

	void PrintListItem(std::string str)
	{
		if (str.length() <= 10)
			std::cout << std::setw(10) << std::right << str;
		else
			std::cout << std::setw(10) << std::right << str.substr(0, 9) + ".";
	}

	void DisplayList()
	{
		std::string	tmp;
		
		printRaw("     index|");
		printRaw("first name|");
		printRaw(" last name|");
		printRaw("  nickname|");
		printRaw("\n");
		for(int i = 0; i < 8; i++)
		{
			printRaw("         ");
			std::cout << i + 1 << "|";
			PrintListItem(contact[i].GetFirstName());
			printRaw("|");
			PrintListItem(contact[i].GetLastName());
			printRaw("|");
			PrintListItem(contact[i].GetNickName());
			print("|");
		}
	}

	void DisplayContact(int i)
	{
		printRaw("\033[1;32mFirst name: \033[0m");
		PrintListItem(contact[i].GetFirstName());
		printRaw("\n\033[1;32mLast name: \033[0m");
		PrintListItem(contact[i].GetLastName());
		printRaw("\n\033[1;32mNickname: \033[0m");
		PrintListItem(contact[i].GetNickName());
		printRaw("\n\033[1;32mPhone number: \033[0m");
		PrintListItem(contact[i].GetPhoneNumber());
		printRaw("\n\033[1;32mDarkest secret: \033[0m");
		PrintListItem(contact[i].GetDarkestSecret());
		printRaw("\n");
	}

	void Search()
	{
		int who;
		
		DisplayList();
		print("Qui cherches-tu ?");
		printRaw("->");
		std::cin >> who;
		if (std::cin.fail() || who > 8 || who < 1)
		{
			std::cin.clear();
			std::cerr << "Ce contact n'existe pas...\n";
			return;
		}
		DisplayContact(who - 1);
	}
};

int main()
{
	PhoneBook repertoire;
	std::string cmd;

	cmd = "boulboul";
	repertoire.init();
	while (1)
	{
		printRaw("PhoneBook> ");
		std::cin >> cmd;
		if (cmd == "ADD")
			repertoire.CreateContact();
		else if (cmd == "S")
			repertoire.Search();
		else if (cmd == "EXIT")
			break;
		else
			print("Désolé, la commande n'as pas été reconnue :(");
		cmd = "boulboul";
	}
	print("Tous les contacts ont été \033[1;32msupprimés\033[0m!\nBonne journée.");
	return (0);
}