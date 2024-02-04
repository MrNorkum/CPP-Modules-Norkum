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
	Fixed(const Fixed& copy);
	~Fixed(void);
	Fixed&	operator=(const Fixed& other);

	//Setters and Getters
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
};

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
