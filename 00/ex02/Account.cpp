/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:09:55 by jgainza-          #+#    #+#             */
/*   Updated: 2022/04/01 13:23:54 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	std::time_t	i;
	i = std::time(0);
	std::tm* now = std::localtime(&i);
	std::cout << "[" << (now->tm_year + 1900);
	if (now->tm_mon + 1 <= 9)
		std::cout << "0" << (now->tm_mon + 1);
	else 
		std::cout << (now->tm_mon + 1);
	if (now->tm_mday <= 9)
		std::cout << "0" << (now->tm_mday) << "_";
	else 
		std::cout << (now->tm_mday) << "_";
	if (now->tm_hour <= 9)
		std::cout << "0" << now->tm_hour;
	else
		std::cout << now->tm_hour;
	if (now->tm_min <= 9)
		std::cout << "0" << now->tm_min;
	else 
		std::cout << now->tm_min;
	if (now->tm_sec <= 9)
		std::cout << "0" << now->tm_sec << "] ";
	else 
		std::cout << now->tm_sec << "] ";
}

Account::Account(int initial_deposit):
	_accountIndex(getNbAccounts()),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	Account::_displayTimestamp();
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << Account::checkAmount();
	if (deposit < 0)
		std::cout << ";deposit:refused" << std::endl;
	else
	{
		std::cout << ";deposit:" << deposit;
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		std::cout << ";amount:" << Account::checkAmount();
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
		std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	}
}

bool	Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << Account::checkAmount();
	if (withdrawal < 0 || Account::checkAmount() - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << ";amount:" << Account::checkAmount();
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::~Account (void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= Account::checkAmount();

}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
