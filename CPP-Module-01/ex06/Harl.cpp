/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Harl.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 16:50:21 by Mr. Norkum                               */
/*   Updated: 2024/01/16 16:50:22 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* ************************************************************************** */
/*                         Private Member Functions                           */
/*                                                                            */
/*   ->void     Harl::debug(void);                                            */
/*   ->void     Harl::info(void);                                             */
/*   ->void     Harl::warning(void);                                          */
/*   ->void     Harl::error(void);                                            */
/*   ->void     Harl::fatal(void);                                            */
/*                                                                            */
/* ************************************************************************** */

void Harl::debug(void)
{
	cout << "[ DEBUG ]" << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void Harl::info(void)
{
	cout << "[ INFO ]" << endl;
	cout << "I cannot believe adding extra bacon costs more money." << endl;
	cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void Harl::warning(void)
{
	cout << "[ WARNING ]" << endl;
	cout << "I think I deserve to have some extra bacon for free." << endl;
	cout << "I've been coming for years whereas you started working here since last month." << endl;
}

void Harl::error(void)
{
	cout << "[ ERROR ]" << endl;
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::fatal(void)
{
	cout << "[ Probably complaining about insignificant problems ]" << endl;
}

/* ************************************************************************** */
/*                          Public Member Functions                           */
/*                                                                            */
/*   ->void     Harl::complain(string level);                                 */
/*                                                                            */
/* ************************************************************************** */

void Harl::complain(string level)
{
	int		i;

	i = 0;
	string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (!levels[i].empty() && level.compare(levels[i]))
		i++;

	void (Harl::*Function[])() =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
		&Harl::fatal
	};

	switch (i)
	{
	case 0:
		(this->*(Function[0]))();
	case 1:
		(this->*(Function[1]))();
	case 2:
		(this->*(Function[2]))();
	case 3:
		(this->*(Function[3]))(); break;
	default:
		(this->*(Function[4]))(); break;
	}
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
