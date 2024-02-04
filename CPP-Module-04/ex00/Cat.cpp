/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Cat.cpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 11:11:56 by Mr. Norkum                               */
/*   Updated: 2024/01/17 11:11:58 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->Cat::Cat(void);                                                        */
/*   ->Cat::Cat(const Cat& copy);                                             */
/*   ->Cat::~Cat(void);                                                       */
/*                                                                            */
/*   ->Cat&   Cat::operator=(const Cat& other);                               */
/*                                                                            */
/* ************************************************************************** */

Cat::Cat(void)
{
	cout << GREEN << "Default constructor called (Cat)" << RESET << endl;
	setType("Cat");
}

Cat::Cat(const Cat& copy)
{
	cout << GREEN << "Copy constructor called (Cat)" << RESET << endl;
	*this = copy;
}

Cat::~Cat(void)
{
	cout << RED << "Destructor called (Cat)" << RESET << endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	cout << YELLOW << "Copy assignment operator called (Cat)" << RESET << endl;
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->void   Cat::makeSound(void) const;                                     */
/*   ->void   Cat::whoAmI(void) const;                                        */
/*                                                                            */
/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	cout << MAGENTA << "Meow! Meow! Meow!" << RESET << endl;
}

void	Cat::whoAmI(void) const
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
