/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   BitcoinExchange.hpp                                                      */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 01:04:53 by Mr. Norkum                               */
/*   Updated: 2024/02/01 01:04:54 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <string>
# include <fstream>
# include <sstream>
# include <map>

#define cout std::cout
#define endl std::endl
#define cerr std::cerr
#define string std::string
#define ifstream std::ifstream
#define getline std::getline
#define stringstream std::stringstream
#define exception std::exception
#define map std::map

/* ************************************************************************** */
/*                           BitcoinExchange Class                            */
/* ************************************************************************** */

class BitcoinExchange
{
private:
	map<string, double> _data;
public:
	//Orthodox Canonical Form
	BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange& copy);
	BitcoinExchange&	operator=(const BitcoinExchange& other);
	~BitcoinExchange(void);

	//Member Functions
	void	readData(void);
	void	readInput(const string file);
	void	checkFileFormat(const string& format);
	string	trim(const string& str);
	bool	checkInputFormat(const string& key, const string& value);
	bool	checkDataSpecialFormat(int year, int month, int day);
	bool	is_stod(const string& str);
	double	my_stod(const string& str);
	double	findRate(string date, map<string, double> data, double value);
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
