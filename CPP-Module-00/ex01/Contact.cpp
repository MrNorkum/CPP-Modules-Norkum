/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Contact.cpp                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/15 22:47:03 by Mr. Norkum                               */
/*   Updated: 2024/01/15 22:47:04 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* ************************************************************************** */
/*                        Constructor and Destructor                          */
/*                                                                            */
/*   ->Contact::Contact(void);                                                */
/*   ->Contact::~Contact(void);                                               */
/*                                                                            */
/* ************************************************************************** */

Contact::Contact(void){}

Contact::~Contact(void){}


/* ************************************************************************** */
/*                               Setters                                      */
/*                                                                            */
/*   ->void    Contact::setFirstName(const string firstname);                 */
/*   ->void    Contact::setLastName(const string lastname);                   */
/*   ->void    Contact::setNickname(const string nickname);                   */
/*   ->void    Contact::setPhoneNumber(const string phonenumber);             */
/*   ->void    Contact::setDarkSecret(const string darksecret);               */
/*                                                                            */
/* ************************************************************************** */


void	Contact::setFirstName(const string firstname)
{
	this->_firstName = firstname;
}

void	Contact::setLastName(const string lastname)
{
	this->_lastName = lastname;
}

void	Contact::setNickname(const string nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(const string phonenumber)
{
	this->_phoneNumber = phonenumber;
}

void	Contact::setDarkSecret(const string darksecret)
{
	this->_darkSecret = darksecret;
}

/* ************************************************************************** */
/*                               Getters                                      */
/*                                                                            */
/*   ->const string&    Contact::getFirstName(void) const;                    */
/*   ->const string&    Contact::getLastName(void) const;                     */
/*   ->const string&    Contact::getNickname(void) const;                     */
/*   ->const string&    Contact::getPhoneNumber(void) const;                  */
/*   ->const string&    Contact::getDarkSecret(void) const;                   */
/*                                                                            */
/* ************************************************************************** */

const string&	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

const string&	Contact::getLastName(void) const
{
	return (this->_lastName);
}

const string&	Contact::getNickname(void) const
{
	return (this->_nickname);
}

const string&	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

const string&	Contact::getDarkSecret(void) const
{
	return (this->_darkSecret);
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
