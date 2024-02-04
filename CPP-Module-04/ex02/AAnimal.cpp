/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   AAnimal.cpp                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 01:20:42 by Mr. Norkum                               */
/*   Updated: 2024/01/20 01:20:43 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->AAnimal::AAnimal(void);                                                */
/*   ->AAnimal::AAnimal(const string type);                                   */
/*   ->AAnimal::AAnimal(const AAnimal& copy);                                 */
/*   ->AAnimal::~AAnimal(void);                                               */
/*                                                                            */
/*   ->AAnimal&   AAnimal::operator=(const AAnimal& other);                   */
/*                                                                            */
/* ************************************************************************** */

AAnimal::AAnimal(void) : _type("AAnimal")
{
	cout << "Default constructor called (AAnimal)" << endl;
}

AAnimal::AAnimal(const string type) : _type(type)
{
	cout << "Type parameterized constructor called (AAnimal)" << endl;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	cout << "Copy constructor called (AAnimal)" << endl;
	*this = copy;
}

AAnimal::~AAnimal(void)
{
	cout << "Destructor called (AAnimal)" << endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	cout << "Copy assignment operator called (AAnimal)" << endl;
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->void            AAnimal::setType(const string type);                   */
/*   ->const string&   AAnimal::getType(void) const;                          */
/*                                                                            */
/* ************************************************************************** */

void	AAnimal::setType(const string type)
{
	this->_type = type;
}

const string&	AAnimal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->virtual void    Animal::makeSound(void) const = 0;                     */
/*   ->virtual void    Animal::whoAmI(void) const = 0;                        */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
