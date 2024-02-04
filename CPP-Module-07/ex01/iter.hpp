/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   iter.hpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/27 08:54:17 by Mr. Norkum                               */
/*   Updated: 2024/01/27 08:54:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

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
void	iter(T* array, size_t size, void (*f)(T&))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void	print(T& s)
{
	cout << "{" << &s << "} ~> " << "[" << s << "]" << endl;
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
