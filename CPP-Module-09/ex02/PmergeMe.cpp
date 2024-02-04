/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PmergeMe.cpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 05:18:03 by Mr. Norkum                               */
/*   Updated: 2024/02/01 05:18:04 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* ************************************************************************** */
/*                        Orthodox Canonical Form                             */
/*                                                                            */
/*   ->PmergeMe::PmergeMe(void);                                              */
/*   ->PmergeMe::PmergeMe(const PmergeMe& copy);                              */
/*   ->PmergeMe::~PmergeMe(void);                                             */
/*                                                                            */
/*   ->PmergeMe&   PmergeMe::operator=(const PmergeMe& other);                */
/*                                                                            */
/* ************************************************************************** */

PmergeMe::PmergeMe(void){}

PmergeMe::~PmergeMe(void){}

PmergeMe::PmergeMe(const PmergeMe& copy)
{*this = copy;}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		this->_vector = other._vector;
		this->_deque = other._deque;
	}
	return (*this);
}

/* ******************************************************************************************* */
/*                           Member Functions                                                  */
/*                                                                                             */
/*   ->void    PmergeMe::sort(char **arr);                                                     */
/*   ->void    PmergeMe::merge_sort(T& deque_, int beg, int end);                              */
/*   ->void    PmergeMe::merge_insert(T& deque_, int left, int mid, int right);                */
/*   ->void    PmergeMe::printVector(void);                                                    */
/*   ->void    PmergeMe::printDeque(void);                                                     */
/*   ->void    PmergeMe::isalnum(char *arr);                                                   */
/*                                                                                             */
/* ******************************************************************************************* */

void	PmergeMe::printVector(void)
{
	int i = 0;

	for (vector<int>::iterator it = this->_vector.begin(); it < this->_vector.end(); it++)
	{
		cout << "[" << *it << "]";
		if(++i > 30)
		{
			cout << " [...]";
			break;
		}
	}
	cout << endl;
}

void	PmergeMe::printDeque(void)
{
	int i = 0;
	for (deque<int>::iterator it = this->_deque.begin(); it != this->_deque.end(); it++)
	{
		cout << "[" << *it << "]";
		if(++i > 30)
		{
			cout << " [...]";
			break;
		}
	}
	cout << endl;
}

void	PmergeMe::isalnum(char *arr)
{
	string str = arr;

	if (str[0] == '-')
		throw "Error: not a positive number.";

	if (str.length() > 10 || (str.length() == 10 && str > "2147483647"))
		throw "Error: too large a number.";

	while (*arr)
	{
		if (!isdigit(*arr) && !str.empty())
			throw "Error: not a number.";
		arr++;
	}
}


void	PmergeMe::sort(char **arr)
{
	clock_t start, end;
	double Vtime, Dtime;

	int nb = 0;

	for (size_t i = 1; arr[i]; i++)
	{
		isalnum(arr[i]);
		istringstream(arr[i]) >> nb;
		this->_vector.push_back(nb);
		this->_deque.push_back(nb);
	}
	cout << "Vector Before :";
	printVector();
	start = clock();
	merge_sort(this->_vector, 0, this->_vector.size() - 1);
	end = clock();
	Vtime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

	cout << "Deque Before :";
	printDeque();
	start = clock();
	merge_sort(this->_deque, 0, this->_deque.size() - 1);
	end = clock();
	Dtime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

	cout << "Vector After :";
	printVector();

	cout << "Deque After :";
	printDeque();

	cout << std::fixed << std::setprecision(4);
	cout << "Time to process a range of "<< this->_vector.size() <<  " elements with std::vector : " << Vtime << " ms\n";
	cout << "Time to process a range of "<< this->_deque.size() <<  " elements with std::deque : " << Dtime << " ms\n";
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
