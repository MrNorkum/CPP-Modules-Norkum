/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Fixed.cpp                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 17:49:14 by Mr. Norkum                               */
/*   Updated: 2024/01/16 17:49:15 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->Fixed::Fixed(void);                                                    */
/*   ->Fixed::Fixed(const Fixed& copy);                                       */
/*   ->Fixed::~Fixed(void);                                                   */
/*                                                                            */
/*   ->Fixed&	Fixed::operator=(const Fixed& other);                         */
/*                                                                            */
/* ************************************************************************** */

Fixed::Fixed(void)
{
	cout << "Default constructor called (Fixed)" << endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed &copy)
{
	cout << "Copy constructor called (Fixed)" << endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called (Fixed)" << endl;
}

Fixed&	Fixed::operator=(const Fixed &other)
{
	cout << "Copy assignment operator called (Fixed)" << endl;
	if (this != &other)
	{
		this->_fixedPoint = other.getRawBits();
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->void    Fixed::setRawBits(int const raw);                              */
/*   ->int     Fixed::getRawBits(void) const;                                 */
/*                                                                            */
/* ************************************************************************** */

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

int		Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called (Fixed)" << endl;
	return (this->_fixedPoint);
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
