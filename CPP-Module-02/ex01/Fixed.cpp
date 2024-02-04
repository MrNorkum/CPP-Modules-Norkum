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
/*   ->Fixed::Fixed(const int value);                                         */
/*   ->Fixed::Fixed(const float value);                                       */
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

Fixed::Fixed(const int value)
{
	cout << "Int parameterized constructor called (Fixed)" << endl;
	setRawBits(value << this->_fractionalBits);
}

Fixed::Fixed(const float value)
{
	cout << "Float parameterized constructor called (Fixed)" << endl;
	setRawBits(roundf(value * (1 << this->_fractionalBits)));
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

int	Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called (Fixed)" << endl;
	return (this->_fixedPoint);
}

/* ************************************************************************** */
/*                             Member Functions                               */
/*                                                                            */
/*   ->int     Fixed::toInt(void) const;                                      */
/*   ->float   Fixed::toFloat(void) const;                                    */
/*                                                                            */
/* ************************************************************************** */

int		Fixed::toInt(void) const
{
	return (getRawBits() >> this->_fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (float)(1 << this->_fractionalBits));
}

/* ************************************************************************** */
/*                          Non Member Functions                              */
/*                                                                            */
/*   ->ostream&    operator<<(ostream& out, const Fixed& value);              */
/*                                                                            */
/* ************************************************************************** */

ostream&	operator<<(ostream& out, const Fixed& value)
{
	out << value.toFloat();
	return (out);
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
