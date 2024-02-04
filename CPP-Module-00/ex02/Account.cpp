/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Account.cpp                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 08:25:04 by Mr. Norkum                               */
/*   Updated: 2024/01/16 08:25:06 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

#define cout std::cout
#define endl std::endl

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* ************************************************************************** */
/*                        Constructor and Destructor                          */
/*                                                                            */
/*   ->Account::Account(void);                                                */
/*   ->Account::Account(int initial_deposit);                                 */
/*   ->Account::~Account(void);                                               */
/*                                                                            */
/* ************************************************************************** */

Account::Account(void) : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0){}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += checkAmount();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << checkAmount() << ";" << "created" << endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << checkAmount() << ";" << "closed" << endl;
}

/* ************************************************************************** */
/*                             Getter Functions                               */
/*                                                                            */
/*   ->int     Account::getNbAccounts(void);                                  */
/*   ->int     Account::getTotalAmount(void);                                 */
/*   ->int     Account::getNbDeposits(void);                                  */
/*   ->int     Account::getNbWithdrawals(void);                               */
/*                                                                            */
/* ************************************************************************** */

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

/* ************************************************************************** */
/*                             Member Functions                               */
/*                                                                            */
/*   ->void    Account::makeDeposit(int deposit);                             */
/*   ->bool    Account::makeWithdrawal(int withdrawal);                       */
/*   ->int     Account::checkAmount(void) const;                              */
/*   ->void    Account::displayStatus(void) const;                            */
/*   ->void    Account::displayAccountsInfos(void);                           */
/*   ->void    Account::_displayTimestamp(void);                              */
/*                                                                            */
/* ************************************************************************** */

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "p_amount:" << checkAmount() << ";";
	cout << "depozit:" << deposit << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	cout << "amount:" << checkAmount() << ";";
	cout << "nb_deposits:" << ++this->_nbDeposits << endl;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "p_amount:" << checkAmount() << ";";
	if (checkAmount() - withdrawal < 0)
		return (cout << "withdrawal:refused" << endl, false);
	cout << "withdrawal:" << withdrawal << ";";
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	cout << "amount:" << checkAmount() << ";";
	cout << "nb_withdrawals:" << ++this->_nbWithdrawals << endl;
	_totalNbWithdrawals++;
	return (true);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << checkAmount() << ";";
	cout << "deposits:" << this->_nbDeposits << ";";
	cout << "withdrawals:" << this->_nbWithdrawals << endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << "accounts:" << getNbAccounts() << ";";
	cout << "total:" << getTotalAmount() << ";";
	cout << "deposits:" << getNbDeposits() << ";";
	cout << "withdrawals:" << getNbWithdrawals() << endl;
}

void	Account::_displayTimestamp(void)
{
	char buffer[18];

	time_t	now = std::time(NULL);
	std::tm		*timeinfo = std::localtime(&now);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", timeinfo);
	cout << "[" << buffer << "] ";
}

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
