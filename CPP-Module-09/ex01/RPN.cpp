/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   RPN.cpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 04:50:38 by Mr. Norkum                               */
/*   Updated: 2024/02/01 04:51:25 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	numSize(string arg)
{
	int size = 0;

	for (int i = 0; arg[i]; i++)
	{
		if ('0' <= arg[i] && arg[i] <= '9')
			size++;
	}
	return (size);
}

int	operatorSize(string arg)
{
	int size = 0;

	for (int i = 0; arg[i]; i++)
	{
		if (arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/')
			size++;
	}
	return (size);
}

void	check_RPN_format(string arg)
{
	if (arg.length() == 0)
		throw std::runtime_error("Error");
	if (arg.find_first_not_of("0123456789-+*/ \r\n\t") != string::npos)
		throw std::runtime_error("Error");
	if (numSize(arg) - operatorSize(arg) != 1)
		throw std::runtime_error("Error");
	if (numSize(arg) + operatorSize(arg) < 2)
		throw std::runtime_error("Error");
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (isalnum(arg.c_str()[i]) && !!arg.c_str()[i + 1] && !isspace(arg.c_str()[i + 1]))
			throw std::runtime_error("Error");
		else if (!isalnum(arg.c_str()[i]) && !isspace(arg.c_str()[i])
			&& !!arg.c_str()[i + 1] && !isspace(arg.c_str()[i + 1]))
			throw std::runtime_error("Error");
	}
}

int	my_stoi(const string& str)
{
	std::istringstream iss(str);
	int result;
	if (!(iss >> result))
		throw std::invalid_argument("Invalid argument");
	return (result);
}

void	RPN_calculator(string arg)
{
	check_RPN_format(arg);

	stack<int> numbers;
	stringstream ss(arg);
	string token;

	while (ss >> token)
	{
		if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if (numbers.size() < 2)
				throw std::invalid_argument("Error");
			int n1 = numbers.top();
			numbers.pop();
			int n2 = numbers.top();
			numbers.pop();

			int result;

			if (token == "+")
				result = n1 + n2;
			else if (token == "-")
				result = n1 - n2;
			else if (token == "*")
				result = n1 * n2;
			else if (token == "/")
			{
				if (n2 == 0)
					throw std::runtime_error("Error");
				result = n1 / n2;
			}

			numbers.push(result);
		}
		else
		{
			int num = my_stoi(token);
			numbers.push(num);
		}
	}
	cout << numbers.top() << endl;
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
