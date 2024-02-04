/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Ice.cpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 04:53:48 by Mr. Norkum                               */
/*   Updated: 2024/01/20 04:53:49 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->Ice::Ice(void);                                                        */
/*   ->Ice::Ice(const Ice& copy);                                             */
/*   ->Ice::~Ice(void);                                                       */
/*                                                                            */
/*   ->Ice&   Ice::operator=(const Ice& other);                               */
/*                                                                            */
/* ************************************************************************** */

Ice::Ice(void)
{
	setType("ice");
}

Ice::Ice(const Ice& copy)
{
	*this = copy;
}

Ice::~Ice(void){}

Ice&	Ice::operator=(const Ice& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->void         Ice::use(ICharacter& target);                             */
/*   ->AMateria*    Ice::clone(void) const;                                   */
/*                                                                            */
/* ************************************************************************** */

void	Ice::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}

AMateria*	Ice::clone(void) const
{
	return (new Ice(*this));
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
