/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Fixed.hpp                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 17:28:22 by Mr. Norkum                               */
/*   Updated: 2024/01/16 17:28:24 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string
#define ostream std::ostream

/* ************************************************************************** */
/*                                Fixed Class                                 */
/* ************************************************************************** */

class Fixed
{
private:
	int					_fixedPoint;
	static const int	_fractionalBits = 8;
public:
	//Orthodox Canonical Form
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& copy);
	~Fixed(void);
	Fixed&	operator=(const Fixed& other);
	Fixed	operator+(const Fixed& other);
	Fixed	operator-(const Fixed& other);
	Fixed	operator*(const Fixed& other);
	Fixed	operator/(const Fixed& other);
	Fixed&	operator+=(const Fixed& other);
	Fixed&	operator-=(const Fixed& other);
	Fixed&	operator*=(const Fixed& other);
	Fixed&	operator/=(const Fixed& other);
	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);
	bool	operator>(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;

	//Setters and Getters
	void	setRawBits(int const raw);
	int		getRawBits(void) const;

	//Member Functions
	int		toInt(void) const;
	float	toFloat(void) const;
	static const Fixed&	min(const Fixed& first, const Fixed& second);
	static Fixed&		min(Fixed& first, Fixed& second);
	static const Fixed&	max(const Fixed& first, const Fixed& second);
	static Fixed&		max(Fixed& first, Fixed& second);
};

//Non Member Functions
ostream&	operator<<(ostream& out, const Fixed& value);

#endif

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
