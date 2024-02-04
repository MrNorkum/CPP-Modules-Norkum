/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Dog.cpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 13:19:50 by Mr. Norkum                               */
/*   Updated: 2024/01/17 13:19:51 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->Dog::Dog(void);                                                        */
/*   ->Dog::Dog(const Dog& copy);                                             */
/*   ->Dog::~Dog(void);                                                       */
/*                                                                            */
/*   ->Dog&   Dog::operator=(const Dog& other);                               */
/*                                                                            */
/* ************************************************************************** */

Dog::Dog(void)
{
	cout << GREEN << "Default constructor called (Dog)" << RESET << endl;
	setType("Dog");
}

Dog::Dog(const Dog& copy)
{
	cout << GREEN << "Copy constructor called (Dog)" << RESET << endl;
	*this = copy;
}

Dog::~Dog(void)
{
	cout << RED << "Destructor called (Dog)" << RESET << endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	cout << YELLOW << "Copy assignment operator called (Dog)" << RESET << endl;
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->void   Dog::makeSound(void) const;                                     */
/*   ->void   Dog::whoAmI(void) const;                                        */
/*                                                                            */
/* ************************************************************************** */

void	Dog::makeSound(void) const
{
	cout << MAGENTA << "Woof! Woof! Woof!" << RESET << endl;
}

void	Dog::whoAmI(void) const
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
