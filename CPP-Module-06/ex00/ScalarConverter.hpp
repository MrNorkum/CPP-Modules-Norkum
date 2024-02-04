/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ScalarConverter.hpp                                                      */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/27 08:53:41 by Mr. Norkum                               */
/*   Updated: 2024/01/27 08:53:41 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include "Norkumstd.hpp"
# include <limits.h>

#define SPECIAL	1
#define CHAR	2
#define INT		3
#define FLOAT	4
#define DOUBLE	5
#define ERROR	6

#define SIGNAL		"+-"
#define DIGIT_SET	"+-0123456789"
#define DOUBLE_SET	"+-0123456789."
#define FLOAT_SET	"+-0123456789.f"

/* ************************************************************************** */
/*                           ScalarConverter Class                            */
/* ************************************************************************** */

class ScalarConverter
{
private:
	//Private Orthodox Canonical Form
	ScalarConverter(void);
	ScalarConverter(const ScalarConverter& copy);
	ScalarConverter&	operator=(const ScalarConverter& other);
	~ScalarConverter(void);

	//Private Static Member Functions
	static int	parseInput(const string& input);

	static bool	isSpecial(const string& in);
	static bool	isSpecialChar(const string& in);
	static bool	hasInvalidSignal(const string& in);

	static bool	isChar(const string& in);

	static bool	isInt(const string& in);

	static bool	isDouble(const string& in);
	static bool	isInvalidDouble(const string& in);

	static bool	isFloat(const string& in);
	static bool	isInvalidFloat(const string& in);

	static void	fromChar(int type, const string& input);
	static void	fromInt(int type, const string& input);
	static void	fromFloat(int type, const string& input);
	static void	fromDouble(int type, const string& input);

	static void	printChar(int type, int i, char c);
	static void	printInt(int type, const string& in, int i);
	static void	printFloat(int type, const string& input, float f);
	static void	printDouble(int type, const string& input, double d);
	static void	printSpecial(const string type, const string& in);
	static void	print(int type, const string& input, char c, int i, float f, double d);
public:
	//Public Static Member Functions
	static void convert(const string& arg);
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
