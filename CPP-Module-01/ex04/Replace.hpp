/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Replace.hpp                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 16:01:51 by Mr. Norkum                               */
/*   Updated: 2024/01/16 16:01:52 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

#define cout std::cout
#define endl std::endl
#define string std::string
#define ifstream std::ifstream
#define ofstream std::ofstream
#define trunc std::ios::trunc
#define getline std::getline

/* ************************************************************************** */
/*                               Replace Class                                */
/* ************************************************************************** */

class Replace
{
public:
	//Member functions
	static bool		checkReplace(string& fname, string& s1, string& s2);
	static string	readFile(string& fname);
	static int		replace(string fname, string s1, string s2);
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
