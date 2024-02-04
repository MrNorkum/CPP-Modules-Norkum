/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   whatever.hpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/27 08:54:17 by Mr. Norkum                               */
/*   Updated: 2024/01/27 08:54:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string

template <typename T>
void	swap(T& a, T& b)
{
	T	temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T&	min(const T& a, const T& b)
{
	return ((a < b) ? a : b);
}

template <typename T>
const T&	max(const T& a, const T& b)
{
	return ((a > b) ? a : b);
}

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
