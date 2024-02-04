/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Data.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/27 08:54:17 by Mr. Norkum                               */
/*   Updated: 2024/01/27 08:54:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/* ************************************************************************** */
/*                       Private Orthodox Canonical Form                      */
/*                                                                            */
/*   ->Data::Data(void);                                                      */
/*   ->Data::Data(uintptr_t raw);                                             */
/*   ->Data::Data(const Data& copy);                                          */
/*   ->Data::~Data(void);                                                     */
/*                                                                            */
/*   ->Data&   Data::operator=(const Data& copy);                             */
/*                                                                            */
/* ************************************************************************** */

Data::Data(void)
{
	cout << "Default constructor called (Data)" << endl;
	this->_raw = 0;
}

Data::Data(uintptr_t raw)
{
	cout << "Parameterized constructor called (Data)" << endl;
	this->_raw = raw;
}

Data::Data(const Data& copy)
{
	cout << "Copy constructor called (Data)" << endl;
	*this = copy;
}

Data::~Data(void)
{
	cout << "Destructor called (Data)" << endl;
}

Data&	Data::operator=(const Data& other)
{
	cout << "Copy assignment operator called (Data)" << endl;
	if (this != &other)
		this->_raw = other._raw;
	return (*this);
}

/* ************************************************************************** */
/*                           Setters and Getters                              */
/*                                                                            */
/*   ->void               Data::setRaw(const uintptr_t raw);                  */
/*                                                                            */
/*   ->const uintptr_t&   Data::getRaw(void) const;                           */
/*                                                                            */
/* ************************************************************************** */

void	Data::setRaw(uintptr_t raw)
{
	this->_raw = raw;
}

const uintptr_t&	Data::getRaw(void) const
{
	return (this->_raw);
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
