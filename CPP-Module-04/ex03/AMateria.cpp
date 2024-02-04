/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   AMateria.cpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 04:52:55 by Mr. Norkum                               */
/*   Updated: 2024/01/20 04:52:57 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->AMateria::AMateria(void);                                              */
/*   ->AMateria::AMateria(string const& type);                                */
/*   ->AMateria::AMateria(AMateria const& copy);                              */
/*   ->AMateria::~AMateria(void);                                             */
/*                                                                            */
/*   ->AMateria&   AMateria::operator=(AMateria const& other);                */
/*                                                                            */
/* ************************************************************************** */

AMateria::AMateria(void)
{
	setType("Unknown type");
}

AMateria::AMateria(string const& type)
{
	setType(type);
}

AMateria::AMateria(AMateria const& copy)
{
	*this = copy;
}

AMateria::~AMateria(void){}

AMateria&	AMateria::operator=(AMateria const& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->void             AMateria::setType(string const& type);                */
/*   ->string const&    AMateria::getType(void) const;                        */
/*                                                                            */
/* ************************************************************************** */

void	AMateria::setType(string const& type)
{
	this->_type = type;
}

string const&   AMateria::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->virtual void         AMateria::use(ICharacter& target);                */
/*   ->virtual AMateria*    clone(void) const = 0;                            */
/*                                                                            */
/* ************************************************************************** */

void	AMateria::use(ICharacter& target)
{
	(void)target;
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
