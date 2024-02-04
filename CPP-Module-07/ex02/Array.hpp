/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Array.hpp                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/30 04:04:17 by Mr. Norkum                               */
/*   Updated: 2024/01/30 04:04:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <ctime>

#define cout std::cout
#define endl std::endl
#define cerr std::cerr
#define ostream std::ostream
#define string std::string
#define exception std::exception

/* ************************************************************************** */
/*                                Array Class                                 */
/* ************************************************************************** */

template <typename T>
class Array
{
private:
	T*		_array;
	size_t	_size;
public:
	//Othodox Canonical Form
	Array(void);
	Array(unsigned int n);
	Array(const Array& copy);
	~Array(void);
	Array&	operator=(const Array& other);
	T&	operator[](const unsigned int index);

	//Getters
	const size_t&	size(void) const;

	//Nested Class
	class OutOfBoundsException : public exception
	{
		virtual const char* what() const throw();
	};
};

//Non Member Functions
template< typename T >
ostream&	operator<<(ostream& out, Array<T>& arr);

#include "Array.tpp"

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
