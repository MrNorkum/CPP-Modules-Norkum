/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   BitcoinExchange.cpp                                                      */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 01:04:47 by Mr. Norkum                               */
/*   Updated: 2024/02/01 01:04:49 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* ******************************************************************************** */
/*                        Orthodox Canonical Form                                   */
/*                                                                                  */
/*   ->BitcoinExchange::BitcoinExchange(void);                                      */
/*   ->BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy);               */
/*   ->BitcoinExchange::~BitcoinExchange(void);                                     */
/*                                                                                  */
/*   ->BitcoinExchange&   BitcoinExchange::operator=(const BitcoinExchange& other); */
/*                                                                                  */
/* ******************************************************************************** */

BitcoinExchange::BitcoinExchange(void){readData();}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy){*this = copy;}

BitcoinExchange::~BitcoinExchange(void){}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other)
{if (this != &other) this->_data = other._data; return *this;}

/* ******************************************************************************************* */
/*                           Member Functions                                                  */
/*                                                                                             */
/*   ->void    BitcoinExchange::readData(void);                                                */
/*   ->void    BitcoinExchange::readInput(const string file);                                  */
/*   ->void    BitcoinExchange::checkFileFormat(const string& format);                         */
/*   ->string  BitcoinExchange::trim(const string& str);                                       */
/*   ->bool    BitcoinExchange::checkInputFormat(const string& key, const string& value);      */
/*   ->bool    BitcoinExchange::checkDataSpecialFormat(int year, int month int day);           */
/*   ->bool    BitcoinExchange::is_stod(const string& str);                                    */
/*   ->double  BitcoinExchange::my_stod(const string& str);                                    */
/*   ->double  BitcoinExchange::findRate(string date, map<string, double> data, double value); */
/*                                                                                             */
/* ******************************************************************************************* */

void	BitcoinExchange::readData(void)
{
	ifstream		dataFile("data.csv");
	string			line;
	string			key;
	string			value;
	size_t			pos;

	if (!dataFile.is_open())
		throw std::runtime_error("File not found");
	getline(dataFile, line);
	while (getline(dataFile, line))
	{
		pos = line.find(",");
		if (pos == string::npos)
			throw std::runtime_error("Invalid data format");
		key = line.substr(0, pos);
		value = line.substr(pos + 1);
		this->_data[key] = my_stod(value);
	}
	dataFile.close();
}

void	BitcoinExchange::readInput(const string file)
{
	ifstream	inputFile(file);
	string		line;
	string		key;
	string		value;
	size_t		pos;

	if (!inputFile.is_open())
		throw std::runtime_error("File not found");
	getline(inputFile, line);
	checkFileFormat(line);
	while (getline(inputFile, line))
	{
		pos = line.find("|");

		if (pos == string::npos)
		{cout << "Error: bad input => " << line << endl; continue ;}

		key = trim(line.substr(0, pos));
		if (key.length() == 0)
		{cout << "Error: bad input => " << line << endl; continue ;}

		value = trim(line.substr(pos + 1));
		if (value.length() == 0)
		{cout << "Error: bad input => " << key << endl; continue ;}

		if (!checkInputFormat(key, value))
			continue ;

		double	mult = findRate(key, this->_data, my_stod(value));
		cout << key << " => " << value << " = " << mult << endl;
	}
	inputFile.close();
}

void	BitcoinExchange::checkFileFormat(const string& format)
{
	if (format != "date | value")
		throw std::runtime_error("Invalid file format");
}

string	BitcoinExchange::trim(const string& str)
{
	size_t	first = str.find_first_not_of(" \t\n\r");
	size_t	last = str.find_last_not_of(" \t\n\r");

	if (first == string::npos || last == string::npos)
		return "";
	return (str.substr(first, last - first + 1));
}

bool	BitcoinExchange::checkInputFormat(const string& key, const string& value)
{
	if (key.length() != 10)
	{cout << "Error: bad input => " << key << endl; return (false);}

	if (key.find_first_not_of("0123456789-") != string::npos)
	{cout << "Error: bad input => " << key << endl; return (false);}

	int year, month, day;
	char separator1, separator2;

	stringstream	ss(key);
	ss >> year >> separator1 >> month >> separator2 >> day;

	if (ss.fail() || separator1 != '-' || separator2 != '-' ||
		year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
	{cout << "Error: bad input => " << key << endl; return (false);}

	if (!checkDataSpecialFormat(year, month, day))
	{cout << "Error: bad input => " << key << endl; return (false);}

	if (value.find_first_not_of("0123456789.-+") != string::npos)
	{cout << "Error: bad input => " << value << endl; return (false);}

	if (is_stod(value))
	{cout << "Error: bad input => " << value << endl; return (false);}

	if (my_stod(value) < 0)
	{cout << "Error: not a positive number. " << endl; return (false);}

	if (my_stod(value) > 1000)
	{cout << "Error: too large a number." << endl; return (false);}

	return (true);
}

bool	BitcoinExchange::checkDataSpecialFormat(int year, int month, int day)
{
	bool leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	if ((month == 2 && (leap_year ? day > 29 : day > 28)))
		return false;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
	return true;
}

bool	BitcoinExchange::is_stod(const string& str)
{
	stringstream	ss(str);
	double			result;

	ss >> result;
	return (ss.fail() || !ss.eof());
}

double	BitcoinExchange::my_stod(const string& str)
{
	double		result;
	stringstream	ss(str);

	ss >> result;
	return result;
}

double	BitcoinExchange::findRate(string date, map<string, double> data, double value)
{
	map<string, double>::iterator it = data.upper_bound(date);
	if (it != data.begin())
		return((--it)->second * value);
	return(0);
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
