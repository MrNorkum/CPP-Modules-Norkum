/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   easyfind.hpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 06:32:31 by Mr. Norkum                               */
/*   Updated: 2024/02/01 06:32:33 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <deque>

#define find std::find
#define cin std::cin
#define cout std::cout
#define cerr std::cerr
#define endl std::endl
#define string std::string
#define out_of_range std::out_of_range
#define exception std::exception
#define vector std::vector
#define list std::list
#define deque std::deque

template <typename T>
void	easyfind(const T& container, int value)
{
	typename T::const_iterator it;
	typename T::const_iterator end;

	end = container.end();
	it = find(container.begin(), container.end(), value);
	(it == end) ? throw out_of_range("Not Found") : cout << "value " << *it << " found" << endl;
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
