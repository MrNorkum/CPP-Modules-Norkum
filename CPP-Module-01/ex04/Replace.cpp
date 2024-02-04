/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Replace.cpp                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 16:03:22 by Mr. Norkum                               */
/*   Updated: 2024/01/16 16:03:23 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

/* ************************************************************************** */
/*                             Member Functions                               */
/*                                                                            */
/*   ->bool     Replace::checkReplace(string& fname, string& s1, string& s2); */
/*   ->string   Replace::readFile(string& fname);                             */
/*   ->int      Replace::replace(string fname, string s1, string s2);         */
/*                                                                            */
/* ************************************************************************** */


bool	Replace::checkReplace(string& fname, string& s1, string& s2)
{
	if (s1.length() == 0 || s2.length() == 0)
	{
		cout << "The string you entered is empty!" << endl;
		return (false);
	}
	ifstream	inFile;
	inFile.open(fname.c_str());
	if (!inFile.is_open())
	{
		cout << "File could not be read!" << endl;
		return (false);
	}
	return (inFile.close(), true);
}

string	Replace::readFile(string& fname)
{
	ifstream	inFile;
	string		fullStr;
	string		line;

	inFile.open(fname.c_str());
	do
	{
		getline(inFile, line);
		fullStr += line;
		if (!inFile.eof())
			fullStr += "\n";
	} while (!inFile.eof());
	inFile.close();
	return (fullStr);
}

int	Replace::replace(string fname, string s1, string s2)
{
	ofstream	outFile;
	string		fullStr;
	size_t		pos;


	if (checkReplace(fname, s1, s2) == false)
		return (1);
	fullStr = readFile(fname);
	outFile.open(fname + ".replace", trunc);
	pos = fullStr.find(s1);
	while (pos != string::npos)
	{
		fullStr.erase(pos, s1.length());
		fullStr.insert(pos, s2);
		pos = fullStr.find(s1);
	}
	return (outFile << fullStr, outFile.close(), 0);
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
