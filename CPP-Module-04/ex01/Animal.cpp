/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Animal.cpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 11:02:51 by Mr. Norkum                               */
/*   Updated: 2024/01/17 11:02:53 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->Animal::Animal(void);                                                  */
/*   ->Animal::Animal(const string type);                                     */
/*   ->Animal::Animal(const Animal& copy);                                    */
/*   ->Animal::~Animal(void);                                                 */
/*                                                                            */
/*   ->Animal&   Animal::operator=(const Animal& other);                      */
/*                                                                            */
/* ************************************************************************** */

Animal::Animal(void) : _type("Animal")
{
	cout << GREEN << "Default constructor called (Animal)" << RESET << endl;
}

Animal::Animal(const string type) : _type(type)
{
	cout << GREEN << "Type parameterized constructor called (Animal)" << RESET << endl;
}

Animal::Animal(const Animal& copy)
{
	cout << GREEN << "Copy constructor called (Animal)" << RESET << endl;
	*this = copy;
}

Animal::~Animal(void)
{
	cout << RED << "Destructor called (Animal)" << RESET << endl;
}

Animal&	Animal::operator=(const Animal& other)
{
	cout << YELLOW << "Copy assignment operator called (Animal)" << RESET << endl;
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->void            Animal::setType(const string type);                    */
/*   ->const string&   Animal::getType(void) const;                           */
/*                                                                            */
/* ************************************************************************** */

void	Animal::setType(const string type)
{
	this->_type = type;
}

const string&	Animal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->virtual void    Animal::makeSound(void) const;                         */
/*   ->virtual void    Animal::whoAmI(void) const;                            */
/*                                                                            */
/* ************************************************************************** */

void	Animal::makeSound(void) const
{
	cout << MAGENTA << "(Unknown) animal sound" << RESET << endl;
}

void	Animal::whoAmI(void) const
{
	cout << "--------------------" << endl;
	cout << CYAN << "Type is: " << getType() << RESET << endl;
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
