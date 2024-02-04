/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PmergeMe.hpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 05:18:09 by Mr. Norkum                               */
/*   Updated: 2024/02/01 05:18:11 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>

# define cout std::cout
# define endl std::endl
# define string std::string
# define stringstream std::stringstream
# define istringstream std::istringstream
# define vector std::vector
# define deque std::deque
# define exception std::exception

/* ************************************************************************** */
/*                              PmergeMe Class                                */
/* ************************************************************************** */

class PmergeMe
{
private:
	vector<int> _vector;
	deque<int>	_deque;
public:
	//Orthodox Canonical Form
	PmergeMe(void);
	PmergeMe(const PmergeMe & origin);
	PmergeMe& operator=(const PmergeMe & origin);
	~PmergeMe(void);

	//Member Functions
	void	sort(char **tab);
	void	printVector(void);
	void	printDeque(void);

	void	isalnum(char *arr);

	template< typename T >
	void	merge_sort(T& deque_, int beg, int end)
	{
		int mid;
		if (beg < end)
		{
			mid = (beg + end) / 2;
			merge_sort(deque_, beg, mid);
			merge_sort(deque_, mid + 1, end);
			merge_insert(deque_, beg, mid, end);
		}
	}

	template< typename T >
	void	merge_insert(T& deque_, int left, int mid, int right)
	{
		vector<int> temp(right - left + 1);

		int i = left, j = mid + 1, k = 0;

		while (i <= mid && j <= right)
		{
			if (deque_[i] <= deque_[j])
				temp[k++] = deque_[i++];
			else
				temp[k++] = deque_[j++];
		}
		while (i <= mid)
			temp[k++] = deque_[i++];

		while (j <= right)
			temp[k++] = deque_[j++];

		for (int p = 0; p < k; p++)
			deque_[left + p] = temp[p];
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
