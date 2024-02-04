/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   WrongAnimal.cpp                                                          */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 13:41:46 by Mr. Norkum                               */
/*   Updated: 2024/01/17 13:41:47 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

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

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	cout << GREEN << "Default constructor called (WrongAnimal)" << RESET << endl;
}

WrongAnimal::WrongAnimal(const string type) : _type(type)
{
	cout << GREEN << "Type parameterized constructor called (WrongAnimal)" << RESET << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	cout << GREEN << "Copy constructor called (WrongAnimal)" << RESET << endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
	cout << RED << "Destructor called (WrongAnimal)" << RESET << endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	cout << YELLOW << "Copy assignment operator called (WrongAnimal)" << RESET << endl;
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->void            WrongAnimal::setType(const string type);               */
/*   ->const string&   WrongAnimal::getType(void) const;                      */
/*                                                                            */
/* ************************************************************************** */

void	WrongAnimal::setType(const string type)
{
	this->_type = type;
}

const string&	WrongAnimal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->void   WrongAnimal::makeSound(void) const;                             */
/*   ->void   WrongAnimal::whoAmI(void) const;                                */
/*                                                                            */
/* ************************************************************************** */

void	WrongAnimal::makeSound(void) const
{
	cout << MAGENTA << "(Unknown) WrongAnimal sound" << RESET << endl;
}

void	WrongAnimal::whoAmI(void) const
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
