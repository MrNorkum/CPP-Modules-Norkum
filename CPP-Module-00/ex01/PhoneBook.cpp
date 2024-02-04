/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PhoneBook.cpp                                                            */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/15 22:47:28 by Mr. Norkum                               */
/*   Updated: 2024/01/15 22:47:29 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/* ************************************************************************** */
/*                        Constructor and Destructor                          */
/*                                                                            */
/*   ->PhoneBook::PhoneBook(void);                                            */
/*   ->PhoneBook::~PhoneBook(void);                                           */
/*                                                                            */
/* ************************************************************************** */

PhoneBook::PhoneBook(void) : _idx(0), _count(0){}

PhoneBook::~PhoneBook(void){}


/* ************************************************************************** */
/*                         Member Functions                                   */
/*                                                                            */
/*   ->void    PhoneBook::addFirstName(void);                                 */
/*   ->void    PhoneBook::addLastName(void);                                  */
/*   ->void    PhoneBook::addNickname(void);                                  */
/*   ->void    PhoneBook::addPhoneNumber(void);                               */
/*   ->void    PhoneBook::addDarkSecret(void);                                */
/*   ->void    PhoneBook::add(void);                                          */
/*                                                                            */
/*   ->void    PhoneBook::printPhoneBook(void) const;                         */
/*   ->void    PhoneBook::printPerson(int idx) const;                         */
/*   ->void    PhoneBook::search(void) const;                                 */
/*                                                                            */
/* ************************************************************************** */


void PhoneBook::addFirstName(void)
{
	string	str;

	do
	{
		cout << "First Name : ";
		getline(cin, str);
		if (str.empty())
			cout << "Error: String cannot be empty. Please enter again." << endl;
	} while (str.empty());
	this->_list[this->_idx].setFirstName(str);
}

void PhoneBook::addLastName(void)
{
	string	str;

	do
	{
		cout << "Last Name : ";
		getline(cin, str);
		if (str.empty())
			cout << "Error: String cannot be empty. Please enter again." << endl;
	} while (str.empty());
	this->_list[this->_idx].setLastName(str);
}

void PhoneBook::addNickname(void)
{
	string	str;

	do
	{
		cout << "Nick Name : ";
		getline(cin, str);
		if (str.empty())
			cout << "Error: String cannot be empty. Please enter again." << endl;
	} while (str.empty());
	this->_list[this->_idx].setNickname(str);
}

void PhoneBook::addPhoneNumber(void)
{
	string	str;
	bool	error;

	do
	{
		error = false;
		cout << "Phone Number : ";
		getline(cin, str);
		if (str.empty())
			cout << "Error: String cannot be empty. Please enter again." << endl;
		if (isnumeric(str) == false || !(9 < str.length() && str.length() < 13))
		{
			cout << "Error: Please enter a valid phone number." << endl;
			error = true;
		}
	} while (str.empty() || error);
	this->_list[this->_idx].setPhoneNumber(str);
}

void PhoneBook::addDarkSecret(void)
{
	string	str;

	do
	{
		cout << "Darkest secret : ";
		getline(cin, str);
		if (str.empty())
			cout << "Error: String cannot be empty. Please enter again." << endl;
	} while (str.empty());
	this->_list[this->_idx].setDarkSecret(str);
}

void PhoneBook::add(void)
{
	static int	i = 0;

	this->_idx = i % 8;
	this->_count = ++i;
	if (this->_count > 7)
		this->_count = 8;
	addFirstName();
	addLastName();
	addNickname();
	addPhoneNumber();
	addDarkSecret();
}


void PhoneBook::printPhoneBook(void) const
{
	cout << endl;
	cout << "-------------------------------------------$" << endl;
	cout << setw(10) << "Index" << "|";
	cout << setw(10) << "First Name" << "|";
	cout << setw(10) << "Last Name" << "|";
	cout << setw(10) << "Nickname" << "|" << endl;
	cout << "-------------------------------------------$" << endl;

	for (int i = 1; i <= this->_count; i++)
	{
		cout << setw(10) << i << "|";
		cout << setw(10) << lengthAdjustment(this->_list[i - 1].getFirstName()) << "|";
		cout << setw(10) << lengthAdjustment(this->_list[i - 1].getLastName()) << "|";
		cout << setw(10) << lengthAdjustment(this->_list[i - 1].getNickname()) << "|" << endl;
		cout << "-------------------------------------------$" << endl;
	}
}

void	PhoneBook::printPerson(int idx) const
{
	if (idx <= 0 || this->_count < idx)
	{
		cout << "Error : There are no " << idx << " contacts in the phone book" << endl;
		return ;
	}
	idx--;
	cout << "First Name : " << this->_list[idx].getFirstName() << endl;
	cout << "Last Name : " << this->_list[idx].getLastName() << endl;
	cout << "Nick Name : " << this->_list[idx].getNickname() << endl;
	cout << "Phone Number : " << this->_list[idx].getPhoneNumber() << endl;
	cout << "Darkest Secret : " << this->_list[idx].getDarkSecret() << endl;
}

void PhoneBook::search(void) const
{
	string	str;
	bool	error;

	if (!this->_count)
	{
		cout << "Phone book is empty!" << endl;
		return ;
	}
	printPhoneBook();
	do
	{
		error = false;
		cout << "Select the person you want to view : ";
		getline(cin, str);
		if (str.empty())
			cout << "Error: String cannot be empty. Please enter again." << endl;
		if (isnumeric(str) == false || (str.length() != 1 && str.length() != 2))
		{
			cout << "Error: Please enter a valid index." << endl;
			error = true;
		}
	} while (str.empty() || error);
	printPerson(atoi(str.c_str()));
}

/* ************************************************************************** */
/*                          Non Member Functions                              */
/*                                                                            */
/*   ->bool    isnumeric(string str);                                         */
/*   ->string  lengthAdjustment(const string& str);                           */
/*                                                                            */
/* ************************************************************************** */

string	lengthAdjustment(const string& str)
{
	string	tmp;

	if (str.length() > 10)
		tmp = str.substr(0, 9) + ".";
	else
		tmp = str;
	return (tmp);
}

bool	isnumeric(string str)
{
	const char	*s = str.c_str();

	while ((9 <= *s && *s <= 13) || *s == 32)
		s++;
	if (*s == 43)
		s++;
	while (48 <= *s && *s <= 57)
		s++;
	while ((9 <= *s && *s <= 13) || *s == 32)
		s++;
	if (*s != '\0')
		return (false);
	return (true);
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
