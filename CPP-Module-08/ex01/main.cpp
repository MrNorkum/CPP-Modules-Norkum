/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 06:32:31 by Mr. Norkum                               */
/*   Updated: 2024/02/01 06:32:33 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	try
	{
		Span s(5);

		for (size_t i = 0; i < 5; i++)
		{
			s.addNumber(s.randomizer());
			std::cin.ignore();
		}
		cout << "shortest span: " << s.shortestSpan() << endl;
		cout << "longest span : " << s.longestSpan() << endl;
	}
	catch (const exception& e)
	{
		cerr << "EXCEPTION: " << e.what() << endl;
	}

	cout << endl;

	try
	{
		Span s(1);
		s.addNumber(s.randomizer());
		s.addNumber(s.randomizer());
		cout << "shortest span: " << s.shortestSpan() << endl;
		cout << "longest span : " << s.longestSpan() << endl;
	}
	catch (const exception& e)
	{
		cerr << "EXCEPTION: " << e.what() << endl;
	}

	try
	{
		Span s(1);
		s.addNumber(2);
		cout << "shortest span: " << s.shortestSpan() << endl;
		cout << "longest span : " << s.longestSpan() << endl;
	}
	catch (const exception& e)
	{
		cerr << "EXCEPTION: " << e.what() << endl;
	}

	cout << endl;
	try
	{
		Span s(10000);
		for (size_t i = 0; i < 10000 * 10000; i++)
		{
			if (i % 10000 == 0)
				s.addNumber(s.randomizer());
		}
		cout << "shortest span: " << s.shortestSpan() << endl;
		cout << "longest span : " << s.longestSpan() << endl;
	}
	catch (const exception& e)
	{
		cerr << "EXCEPTION: " << e.what() << endl;
	}

	return 0;
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
