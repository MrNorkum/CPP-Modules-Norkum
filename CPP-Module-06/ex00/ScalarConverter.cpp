/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ScalarConverter.cpp                                                      */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/27 08:54:17 by Mr. Norkum                               */
/*   Updated: 2024/01/27 08:54:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* ***************************************************************************** */
/*                       Private Orthodox Canonical Form                         */
/*                                                                               */
/*   ->ScalarConverter::ScalarConverter(void);                                   */
/*   ->ScalarConverter::ScalarConverter(const ScalarConverter& copy);            */
/*   ->ScalarConverter::~ScalarConverter(void);                                  */
/*                                                                               */
/*   ->ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy); */
/*                                                                               */
/* ***************************************************************************** */

ScalarConverter::ScalarConverter(void){}

ScalarConverter::ScalarConverter(ScalarConverter const &other)
{*this = other;}

ScalarConverter::~ScalarConverter(void){}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{(void)other; return (*this);}

/* ***************************************************************************** */
/*                          Public Static Member Functions                       */
/*                                                                               */
/*   ->void    ScalarConverter::convert(const string& input);                    */
/*                                                                               */
/* ***************************************************************************** */

void	ScalarConverter::convert(const string& input)
{
	int type = ScalarConverter::parseInput(input);

	switch (type)
	{
		case SPECIAL:
			ScalarConverter::fromDouble(type, input);
			break;
		case CHAR:
			ScalarConverter::fromChar(type, input);
			break;
		case INT:
			ScalarConverter::fromInt(type, input);
			break;
		case FLOAT:
			ScalarConverter::fromFloat(type, input);
			break;
		case DOUBLE:
			ScalarConverter::fromDouble(type, input);
			break;
		default:
			cout << RED << "Error: Impossible to print or input not convertable" << endl;
			break;
	}
}

/* **************************************************************************************************** */
/*                             Private Static Member Functions                                          */
/*                                                                                                      */
/*   ->int     ScalarConverter::parseInput(const string& input);                                        */
/*   ->bool    ScalarConverter::isSpecial(const string& in);                                            */
/*   ->bool    ScalarConverter::isSpecialChar(const string& in);                                        */
/*   ->bool    ScalarConverter::hasInvalidSignal(const string& in);                                     */
/*   ->bool    ScalarConverter::isChar(const string& in);                                               */
/*   ->bool    ScalarConverter::isInt(const string& in);                                                */
/*   ->bool    ScalarConverter::isDouble(const string& in);                                             */
/*   ->bool    ScalarConverter::isInvalidDouble(const string& in);                                      */
/*   ->bool    ScalarConverter::isFloat(const string& in);                                              */
/*   ->bool    ScalarConverter::isInvalidFloat(const string& in);                                       */
/*   ->void    ScalarConverter::fromChar(int type, const string& input);                                */
/*   ->void    ScalarConverter::fromInt(int type, const string& input);                                 */
/*   ->void    ScalarConverter::fromFloat(int type, const string& input);                               */
/*   ->void    ScalarConverter::fromDouble(int type, const string& input);                              */
/*   ->void    ScalarConverter::printChar(int type, int i, char c);                                     */
/*   ->void    ScalarConverter::printInt(int type, const string& in, int i);                            */
/*   ->void    ScalarConverter::printFloat(int type, const string& input, float f);                     */
/*   ->void    ScalarConverter::printDouble(int type, const string& input, double d);                   */
/*   ->void    ScalarConverter::printSpecial(const string type, const string& in);                      */
/*   ->void    ScalarConverter::print(int type, const string& input, char c, int i, float f, double d); */
/*                                                                                                      */
/* **************************************************************************************************** */

int ScalarConverter::parseInput(const string& input)
{
	if (isSpecial(input))
		return (SPECIAL);
	else if (isSpecialChar(input))
		return (CHAR);
	else if (hasInvalidSignal(input))
		return (ERROR);
	else if (isInt(input))
		return (INT);
	else if (isDouble(input))
	{
		if (isInvalidDouble(input))
			return (ERROR);
		return (DOUBLE);
	}
	else if (isFloat(input))
	{
		if (isInvalidFloat(input))
			return (ERROR);
		return (FLOAT);
	}
	else if (isChar(input))
		return (CHAR);
	return (ERROR);
}

bool	ScalarConverter::isSpecial(const string& in)
{
	return (in == "nan" || in == "nanf" || in == "+inf" || in == "-inf" || in == "+inff" || in == "-inff" || in == "inf" || in == "inff");
}

bool	ScalarConverter::isSpecialChar(const string& in)
{
	return (in.length() == 1 &&	(in[0] == '+' || in[0] == '-' || in[0] == '.' || in[0] == 'f'));
}

bool	ScalarConverter::hasInvalidSignal(const string& in)
{
	return (in.find_first_of(SIGNAL) != in.find_last_of(SIGNAL));
}

bool	ScalarConverter::isInt(const string& in)
{
	return (in.find_first_not_of(DIGIT_SET) == string::npos);
}

bool	ScalarConverter::isDouble(const string& in)
{
	return (in.find_first_not_of(DOUBLE_SET) == string::npos);
}

bool	ScalarConverter::isInvalidDouble(const string& in)
{
	return (in.find_first_of(".") != in.find_last_of(".")
		|| isdigit(in[in.find_first_of(".") + 1]) == false
		|| in.find_first_of(".") == 0);
}
bool	ScalarConverter::isFloat(const string& in)
{
	return (in.find_first_not_of(FLOAT_SET) == string::npos);
}

bool	ScalarConverter::isInvalidFloat(const string& in)
{
	return (in.find_first_of("f") != in.find_last_of("f")
		|| in.find_first_of(".") != in.find_last_of(".")
		|| in.find_first_of("f") - in.find_first_of(".") == 1
		|| isdigit(in[in.find_first_of(".") + 1]) == false
		|| in.find_first_of(".") == 0);
}

bool	ScalarConverter::isChar(const string& in)
{
	return (in.length() == 1 && isprint(in[0]));
}

void	ScalarConverter::fromChar(int type, const string& input)
{
	char	c = static_cast<unsigned char>(input[0]);
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);
	ScalarConverter::print(type, input, c, i, f, d);
}

void	ScalarConverter::fromInt(int type, const string& input)
{
	int		i = atoi(input.c_str());
	char	c = static_cast<unsigned char>(i);
	float	f = static_cast<float>(i);
	double	d = static_cast<double>(i);
	ScalarConverter::print(type, input, c, i, f, d);
}

void	ScalarConverter::fromFloat(int type, const string& input)
{
	float	f = atof(input.c_str());
	char	c = static_cast<unsigned char>(f);
	int		i = static_cast<int>(f);
	double	d = static_cast<float>(f);
	ScalarConverter::print(type, input, c, i, f, d);
}

void	ScalarConverter::fromDouble(int type, const string& input)
{
	double	d = atof(input.c_str());
	char	c = static_cast<unsigned char>(d);
	int		i = static_cast<int>(d);
	float	f = static_cast<float>(d);
	ScalarConverter::print(type, input, c, i, f, d);
}

void	ScalarConverter::printChar(int type, int i, char c)
{
	if (type == SPECIAL || i < 0 || i > UCHAR_MAX)
	{
		cout << "char: impossible" << endl;
		return ;
	}
	if (isprint(i))
		cout << "char: \'" << c << "\'" << endl;
	else
		cout << "char: Non displayable" << endl;
}

void	ScalarConverter::printInt(int type, const string& in, int i)
{
	double check = atof(in.c_str());

	if (type != SPECIAL && (check >= INT_MIN && check <= INT_MAX))
		cout << "int: " << i << endl;
	else
		cout << "int: impossible" << endl;
}

void	ScalarConverter::printSpecial(const string type, const string& in)
{
	if (in == "nan" || in == "nanf")
	{
		cout << type << ": nan";
		if (type == "float")
			cout << "f";
		cout << endl;
	}
	else if (in == "+inf" || in == "+inff")
	{
		cout << type << ": +inf";
		if (type == "float")
			cout << "f";
		cout << endl;
	}
	else if (in == "-inf" || in == "-inff")
	{
		cout << type << ": -inf";
		if (type == "float")
			cout << "f";
		cout << endl;
	}
	else if (in == "inf" || in == "inff")
	{
		cout << type << ": inf";
		if (type == "float")
			cout << "f";
		cout << endl;
	}
}

void	ScalarConverter::printFloat(int type, const string& input, float f)
{
	if (type == SPECIAL)
	{
		printSpecial("float", input);
		return ;
	}
	double check = atof(input.c_str());

	if (type == INT && (check < INT_MIN || check > INT_MAX))
		cout << "float: impossible" << endl;
	else
		cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << endl;
}

void	ScalarConverter::printDouble(int type, const string& input, double d)
{
	if (type == SPECIAL)
	{
		printSpecial("double", input);
		return ;
	}
	double check = atof(input.c_str());

	if (type == INT && (check < INT_MIN || check > INT_MAX))
		cout << "double: impossible" << endl;
	else
		cout << "double: " << std::fixed << std::setprecision(1) << d << endl;
}

void ScalarConverter::print(int type, const string& input, char c, int i, float f, double d)
{
	printChar(type, i, c);
	printInt(type, input, i);
	printFloat(type, input, f);
	printDouble(type, input, d);
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
