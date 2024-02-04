/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   MutantStack.hpp                                                          */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 08:07:25 by Mr. Norkum                               */
/*   Updated: 2024/02/01 08:07:27 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <iostream>
#include <list>
#include <stack>
#include <ostream>
#include <algorithm>

#define cout std::cout
#define endl std::endl
#define list std::list

/* ************************************************************************** */
/*                            MutantStack Class                               */
/* ************************************************************************** */

template < typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
	public:
		typedef typename std::stack<T, C>::container_type::iterator					iterator;
		typedef typename std::stack<T, C>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T, C>::container_type::reverse_iterator			reverse_iterator;
		typedef typename std::stack<T, C>::container_type::const_reverse_iterator	const_reverse_iterator;

		//Orthodox Canonical Form
		MutantStack<T, C>(void) : std::stack<T, C>(){};
		MutantStack<T, C>(const MutantStack<T, C>& copy) : std::stack<T, C>(copy){};
		~MutantStack<T, C>(void){};

		MutantStack<T, C>&	operator=(const MutantStack<T, C>& other)
		{
			if (this != &other)
				this->c = other.c;
			return (*this);
		}

		//Member Functions
		MutantStack<T, C>::iterator	begin(void)
		{
			return (this->c.begin());
		}

		MutantStack<T, C>::iterator	end(void)
		{
			return (this->c.end());
		}

		MutantStack<T, C>::const_iterator	begin(void) const
		{
			return (this->c.begin());
		}

		MutantStack<T, C>::const_iterator	end(void) const
		{
			return (this->c.end());
		}

		MutantStack<T, C>::reverse_iterator	rbegin(void)
		{
			return (this->c.rbegin());
		}

		MutantStack<T, C>::reverse_iterator	rend(void)
		{
			return (this->c.rend());
		}

		MutantStack<T, C>::const_reverse_iterator	rbegin(void) const
		{
			return (this->c.rbegin());
		}

		MutantStack<T, C>::const_reverse_iterator	rend(void) const
		{
			return (this->c.rend());
		}
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
