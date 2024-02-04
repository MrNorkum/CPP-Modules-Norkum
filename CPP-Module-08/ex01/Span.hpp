/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Span.hpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/31 18:40:27 by Mr. Norkum                               */
/*   Updated: 2024/01/31 18:40:28 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <ctime>

#define cout std::cout
#define cerr std::cerr
#define endl std::endl
#define string std::string
#define vector std::vector
#define exception std::exception
#define srand std::srand

/* ************************************************************************** */
/*                                Span Class                                  */
/* ************************************************************************** */

class Span
{
private:
	unsigned int	_N;
	unsigned int	_count;
	vector<int>		_arr;

	Span(void);
public:
	//Orthodox Canonical Form
	Span(unsigned int N);
	Span(const Span& copy);
	~Span(void);
	Span	&operator=(const Span& other);

	//Setters and Getters
	void				increment(void);
	const unsigned int&	size(void) const;
	const unsigned int&	count(void) const;
	const vector<int>&	getArray(void) const;

	//Member Functions
	int		randomizer(void) const;
	void	addNumber(const int number);
	bool	swap(int *a, int *b);
	void	bubbleSort(vector<int>& arr);
	int		shortestSpan(void);
	int		longestSpan(void);

	//Nested Class
	class FullArrayException : public exception
	{
	public:
		virtual const char* what() const throw();
	};
	class SmallSizeException : public exception
	{
	public:
		virtual const char* what() const throw();
	};
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
