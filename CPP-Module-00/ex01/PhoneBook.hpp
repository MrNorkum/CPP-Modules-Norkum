/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PhoneBook.hpp                                                            */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/15 22:47:36 by Mr. Norkum                               */
/*   Updated: 2024/01/15 22:47:39 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>

#define cout std::cout
#define endl std::endl
#define cin std::cin
#define getline std::getline
#define setw std::setw
#define atoi std::atoi

/* ************************************************************************** */
/*                             PhoneBook Class                                */
/* ************************************************************************** */

class PhoneBook
{
	private:
		Contact	_list[8];
		int		_idx;
		int		_count;
	public:
		//Constructor and Destructor
		PhoneBook(void);
		~PhoneBook(void);

		//Member Functions
		void	addFirstName(void);
		void	addLastName(void);
		void	addNickname(void);
		void	addPhoneNumber(void);
		void	addDarkSecret(void);
		void	add(void);

		void	printPhoneBook(void) const;
		void	printPerson(int idx) const;
		void	search(void) const;
};

//Non Member Functions
bool	isnumeric(string str);
string	lengthAdjustment(const string& str);

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
