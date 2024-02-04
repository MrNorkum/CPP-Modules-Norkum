/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Contact.hpp                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/15 22:47:11 by Mr. Norkum                               */
/*   Updated: 2024/01/15 22:47:14 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#define string std::string

/* ************************************************************************** */
/*                               Contact Class                                */
/* ************************************************************************** */

class Contact
{
	private:
		string _firstName;
		string _lastName;
		string _nickname;
		string _phoneNumber;
		string _darkSecret;
	public:
		//Constructor and Destructor
		Contact(void);
		~Contact(void);

		//Setters
		void	setFirstName(const string firstname);
		void	setLastName(const string lastname);
		void	setNickname(const string nickname);
		void	setPhoneNumber(const string phonenumber);
		void	setDarkSecret(const string darksecret);

		//Getters
		const string&	getFirstName(void) const;
		const string&	getLastName(void) const;
		const string&	getNickname(void) const;
		const string&	getPhoneNumber(void) const;
		const string&	getDarkSecret(void) const;
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
