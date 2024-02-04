/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Span.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/31 19:09:37 by Mr. Norkum                               */
/*   Updated: 2024/01/31 19:09:39 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* ************************************************************************** */
/*                        Orthodox Canonical Form                             */
/*                                                                            */
/*   ->Span::Span(void);                                                      */
/*   ->Span::Span(const unsigned int N);                                      */
/*   ->Span::Span(const Span& copy);                                          */
/*   ->Span::~Span(void);                                                     */
/*                                                                            */
/*   ->Span&   Span::operator=(const Span& other);                            */
/*                                                                            */
/* ************************************************************************** */

Span::Span(void)
{
	cout << "Default constructor called (Span)" << endl;
	_N = 0;
	_count = 0;
}

Span::Span(const unsigned int N)
{
	cout << "Parameterized constructor called (Span)" << endl;
	this->_N = N;
	this->_count = 0;
}

Span::Span(const Span& copy)
{
	cout << "Copy constructor called (Span)" << endl;
	*this = copy;
}

Span::~Span(void)
{
	cout << "Destructor called (Span)" << endl;
}

Span&	Span::operator=(const Span& other)
{
	cout << "Copy assignment operator called (Span)" << endl;
	if (this != &other)
	{
		this->_N = other.size();
		this->_count = other._count;
		this->_arr = other.getArray();
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Getters                                     */
/*                                                                            */
/*   ->void                   Span::increment(void);                          */
/*                                                                            */
/*   ->const unsigned int&    Span::size(void) const;                         */
/*   ->const unsigned int&    Span::count(void) const;                        */
/*   ->const vector<int>&     Span::getArray(void) const;                     */
/*                                                                            */
/* ************************************************************************** */

void	Span::increment(void)
{
	this->_count++;
}

const unsigned int&	Span::size(void) const
{
	return (this->_N);
}

const unsigned int&	Span::count(void) const
{
	return (this->_count);
}

const vector<int>&	Span::getArray(void) const
{
	return (this->_arr);
}

/* ************************************************************************** */
/*                           Member Functions                                 */
/*                                                                            */
/*   ->int     Span::randomizer(void) const;                                  */
/*   ->void    Span::addNumber(const int number);                             */
/*   ->bool    Span::swap(int *a, int *b);                                    */
/*   ->void    Span::bubbleSort(vector<int>& arr);                            */
/*   ->int     Span::shortestSpan(void);                                      */
/*   ->int     Span::longestSpan(void);                                       */
/*                                                                            */
/* ************************************************************************** */

int	Span::randomizer(void) const
{
	srand(time(NULL));
	if (rand() % 2 == 0)
		return ((rand() % 12345 + 123) * 456);
	else
		return ((rand() % 12345 + 123) / 456);
}

void	Span::addNumber(const int number)
{
	if (count() == size())
		throw FullArrayException();
	this->_arr.push_back(number);
	increment();
}

bool	Span::swap(int *a, int *b)
{
	long	temp;

	temp = *a;
	*a = *b;
	*b = temp;
	return (true);
}

void	Span::bubbleSort(vector<int>& arr)
{
	bool	is_swap;

	is_swap = true;
	while (is_swap)
	{
		is_swap = false;
		for (size_t i = 0; i < arr.size(); i++)
		{
			if (arr[i] > arr[i + 1])
				is_swap = swap(&arr[i], &arr[i + 1]);
		}
	}
}

int	Span::shortestSpan(void)
{
	if (count() < 2)
		throw SmallSizeException();
	vector<int> copy(getArray());
	bubbleSort(copy);
	return (copy[1] - copy[0]);
}

int	Span::longestSpan(void)
{
	if (count() < 2)
		throw SmallSizeException();
	vector<int> copy(getArray());
	bubbleSort(copy);
	return (copy[copy.size() - 1] - copy[0]);
}

/* ************************************************************************** */
/*                           Nested Classes                                   */
/*                                                                            */
/*   ->const char *Span::FullArrayException::what() const throw();            */
/*   ->const char *Span::SmallSizeException::what() const throw();            */
/*                                                                            */
/* ************************************************************************** */

const char *Span::FullArrayException::what() const throw()
{
	return ("Array is full");
}

const char *Span::SmallSizeException::what() const throw()
{
	return ("Array is too small");
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
