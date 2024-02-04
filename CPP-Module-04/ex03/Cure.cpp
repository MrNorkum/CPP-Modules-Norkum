/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Cure.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 04:53:30 by Mr. Norkum                               */
/*   Updated: 2024/01/20 04:53:32 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->Cure::Cure(void);                                                      */
/*   ->Cure::Cure(const Cure& copy);                                          */
/*   ->Cure::~Cure(void);                                                     */
/*                                                                            */
/*   ->Cure&   Cure::operator=(const Cure& other);                            */
/*                                                                            */
/* ************************************************************************** */

Cure::Cure(void)
{
	setType("cure");
}

Cure::Cure(const Cure& copy)
{
	*this = copy;
}

Cure::~Cure(void){}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->void         Cure::use(ICharacter& target);                            */
/*   ->AMateria*    Cure::clone(void) const;                                  */
/*                                                                            */
/* ************************************************************************** */

void	Cure::use(ICharacter& target)
{
	cout << "* heals " << target.getName() << "\'s wounds *" << endl;
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
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
