/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 02:03:52 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/04 03:43:08 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
    return (_nbAccounts);
}

int Account::getTotalAmount(void) {
    return (_totalAmount);
}

int Account::getNbDeposits(void) {
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts
			  << ";total:" << Account::_totalAmount
			  << ";deposits:" << Account::_totalNbDeposits
			  << ";withdrawals:" << Account::_totalNbWithdrawals
			  << "\n";
    return ;
}

Account::Account(int initial_deposit) {
	Account::_displayTimestamp();
	Account::_accountIndex = Account::_nbAccounts++;
	Account::_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	std::cout << "index:" << Account::_accountIndex
			  << ";amount:" << initial_deposit
			  << ";created\n";
	return ;
}

Account::~Account(void) {
	_nbAccounts--;
	Account::_displayTimestamp();
    std::cout << "index:" << Account::_accountIndex
			  << ";amount:" << Account::_amount
			  << ";closed\n";
}

void Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	Account::_nbDeposits += 1;
	Account::_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	std::cout << "index:" << Account::_accountIndex
			  << ";p_amount:" << Account::_amount - deposit
			  << ";deposit:" << deposit
			  << ";amount:" << Account::_amount
			  << ";nb_deposits:" << Account::_nbDeposits
			  << "\n";
    return ;
}

bool Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	if (checkAmount() >= withdrawal)
	{
		_nbWithdrawals += 1;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;
		std::cout << "index:" << Account::_accountIndex
				  << ";p_amount:" << Account::_amount + withdrawal
				  << ";withdrawal:" << withdrawal
				  << ";amount:" << Account::_amount
				  << ";nb_withdrawals:" << Account::_nbWithdrawals
				  << "\n";
		return true;
	}
	else
	{
		std::cout << "index:" << Account::_accountIndex
					<< ";p_amount:" << Account::_amount
					<< ";withdrawal:refused\n";
		return false;
	}
}

int Account::checkAmount(void) const {
    return _amount;
}

void Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals
			  << "\n";
    return ;
}

void Account::_displayTimestamp(void) {
    std::time_t now = std::time(0);
    std::tm* localtm = std::localtime(&now);
    std::cout << "[" << (localtm->tm_year + 1900) 
              << std::setw(2) << std::setfill('0') << (localtm->tm_mon + 1)
              << std::setw(2) << std::setfill('0') << localtm->tm_mday << "_"
              << std::setw(2) << std::setfill('0') << localtm->tm_hour
              << std::setw(2) << std::setfill('0') << localtm->tm_min
              << std::setw(2) << std::setfill('0') << localtm->tm_sec << "] ";
}
