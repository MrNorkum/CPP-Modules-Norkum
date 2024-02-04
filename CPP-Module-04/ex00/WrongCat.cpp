/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   WrongCat.cpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 14:00:20 by Mr. Norkum                               */
/*   Updated: 2024/01/17 14:00:21 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->WrongAnimal::WrongAnimal(void);                                        */
/*   ->WrongAnimal::WrongAnimal(const WrongAnimal& copy);                     */
/*   ->WrongAnimal::~WrongAnimal(void);                                       */
/*                                                                            */
/*   ->WrongAnimal&   WrongAnimal::operator=(const WrongAnimal& other);       */
/*                                                                            */
/* ************************************************************************** */

WrongCat::WrongCat(void)
{
	cout << GREEN << "Default constructor called (WrongCat)" << RESET << endl;
	setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& copy)
{
	cout << GREEN << "Copy constructor called (WrongCat)" << RESET << endl;
	*this = copy;
}

WrongCat::~WrongCat(void)
{
	cout << RED << "Destructor called (WrongCat)" << RESET << endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	cout << YELLOW << "Copy assignment operator called (WrongCat)" << RESET << endl;
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->void   WrongCat::makeSound(void) const;                                */
/*   ->void   WrongCat::whoAmI(void) const;                                   */
/*                                                                            */
/* ************************************************************************** */

void	WrongCat::makeSound(void) const
{
	cout << MAGENTA << "WrongMeow! WrongMeow! WrongMeow!" << RESET << endl;
}

void	WrongCat::whoAmI(void) const
{
	cout << "--------------------" << endl;
	cout << CYAN << "My type is: " << getType() << RESET << endl;
	makeSound();
	cout << "--------------------" << endl;
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
