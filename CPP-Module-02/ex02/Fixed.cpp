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
/*   ->Fixed&   Fixed::operator=(const Fixed& other);                         */
/*                                                                            */
/* ************************************************************************** */
/*                           Operator Overloading                             */
/*                                                                            */
/*   ->Fixed    operator+(const Fixed& other);                                */
/*   ->Fixed    operator-(const Fixed& other);                                */
/*   ->Fixed    operator*(const Fixed& other);                                */
/*   ->Fixed    operator/(const Fixed& other);                                */
/*   ->Fixed&   operator+=(const Fixed& other);                               */
/*   ->Fixed&   operator-=(const Fixed& other);                               */
/*   ->Fixed&   operator*=(const Fixed& other);                               */
/*   ->Fixed&   operator/=(const Fixed& other);                               */
/*   ->Fixed&   operator++(void);                                             */
/*   ->Fixed    operator++(int);                                              */
/*   ->Fixed&   operator--(void);                                             */
/*   ->Fixed    operator--(int);                                              */
/*   ->bool     operator==(const Fixed& other) const;                         */
/*   ->bool     operator!=(const Fixed& other) const;                         */
/*   ->bool     operator<(const Fixed& other) const;                          */
/*   ->bool     operator>(const Fixed& other) const;                          */
/*   ->bool     operator<=(const Fixed& other) const;                         */
/*   ->bool     operator>=(const Fixed& other) const;                         */
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

Fixed::Fixed(const Fixed& copy)
{
	cout << "Copy constructor called (Fixed)" << endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called (Fixed)" << endl;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	cout << "Assignment operator called (Fixed)" << endl;
	if (this != &other)
	{
		this->_fixedPoint = other.getRawBits();
	}
	return (*this);
}

Fixed	Fixed::operator+(const Fixed& other)
{
	cout << "Plus operator called (Fixed)" << endl;
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other)
{
	cout << "Minus operator called (Fixed)" << endl;
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& other)
{
	cout << "Multiply operator called (Fixed)" << endl;
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other)
{
	cout << "Divide operator called (Fixed)" << endl;
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed&	Fixed::operator+=(const Fixed& other)
{
	cout << "Plus equal operator called (Fixed)" << endl;
	*this = *this + other;
	return (*this);
}

Fixed&	Fixed::operator-=(const Fixed& other)
{
	cout << "Minus equal operator called (Fixed)" << endl;
	*this = *this - other;
	return (*this);
}

Fixed&	Fixed::operator*=(const Fixed& other)
{
	cout << "Multiply equal operator called (Fixed)" << endl;
	*this = *this * other;
	return (*this);
}

Fixed&	Fixed::operator/=(const Fixed& other)
{
	cout << "Divide equal operator called (Fixed)" << endl;
	*this = *this / other;
	return (*this);
}

Fixed&	Fixed::operator++(void)
{
	cout << "Increment pre operator called (Fixed)" << endl;
	this->_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	cout << "Increment post operator called (Fixed)" << endl;
	Fixed temp(*this);
	operator++();
	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	cout << "Decrement pre operator called (Fixed)" << endl;
	this->_fixedPoint--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	cout << "Decrement post operator called (Fixed)" << endl;
	Fixed temp(*this);
	operator--();
	return (temp);
}

bool	Fixed::operator==(const Fixed& other) const
{
	cout << "Equal to operator called (Fixed)" << endl;
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=(const Fixed& other) const
{
	cout << "Not equal to operator called (Fixed)" << endl;
	return (this->toFloat() != other.toFloat());
}

bool	Fixed::operator<(const Fixed& other) const
{
	cout << "Less than operator called (Fixed)" << endl;
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator>(const Fixed& other) const
{
	cout << "Greater than operator called (Fixed)" << endl;
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator<=(const Fixed& other) const
{
	cout << "Less than or equal to operator called (Fixed)" << endl;
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator>=(const Fixed& other) const
{
	cout << "Greater than or equal to operator called (Fixed)" << endl;
	return (this->toFloat() >= other.toFloat());
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
	return (this->_fixedPoint);
}

/* ************************************************************************** */
/*                             Member Functions                               */
/*                                                                            */
/*   ->int          Fixed::toInt(void) const;                                 */
/*   ->float        Fixed::toFloat(void) const;                               */
/*   ->Fixed&       min(Fixed& first, Fixed& second);                         */
/*   ->Fixed&       max(Fixed& first, Fixed& second);                         */
/*   ->const Fixed& min(const Fixed& first, const Fixed& second);             */
/*   ->const Fixed& max(const Fixed& first, const Fixed& second);             */
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

Fixed&	Fixed::min(Fixed& first, Fixed& second)
{
	return ((first < second) ? first : second);
}

Fixed&	Fixed::max(Fixed& first, Fixed& second)
{
	return ((first > second) ? first : second);
}

const Fixed&	Fixed::min(const Fixed& first, const Fixed& second)
{
	return ((first < second) ? first : second);
}

const Fixed&	Fixed::max(const Fixed& first, const Fixed& second)
{
	return ((first > second) ? first : second);
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
