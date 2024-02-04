/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Cat.cpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 16:03:34 by Mr. Norkum                               */
/*   Updated: 2024/01/17 16:03:36 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->WrongCat::WrongCat(void);                                              */
/*   ->WrongCat::WrongCat(const string idea);                                 */
/*   ->WrongCat::WrongCat(const WrongCat& copy);                              */
/*   ->WrongCat::~WrongCat(void);                                             */
/*                                                                            */
/*   ->WrongCat&   WrongCat::operator=(const WrongCat& other);                */
/*                                                                            */
/* ************************************************************************** */

WrongCat::WrongCat(void) : setCheck(false)
{
	cout << GREEN << "Default constructor called (WrongCat)" << RESET << endl;
	Brain* newBrain = new Brain();
	setBrain(*newBrain);
	delete newBrain;
	setType("Cat");
}

WrongCat::WrongCat(const string idea) : setCheck(false)
{
	cout << GREEN << "Idea parameterized constructor called (WrongCat)" << RESET << endl;
	Brain* newBrain = new Brain(idea);
	setBrain(*newBrain);
	delete newBrain;
	setType("Cat");
}

WrongCat::WrongCat(const WrongCat& copy) : setCheck(false)
{
	cout << GREEN << "Copy constructor called (WrongCat)" << RESET << endl;
	setBrain(copy.getBrain());
	this->_type = copy.getType();
}

WrongCat::~WrongCat(void)
{
	delete this->_brain;
	cout << RED << "Destructor called (WrongCat)" << RESET << endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	cout << YELLOW << "Copy assignment operator called (WrongCat)" << RESET << endl;
	if (this != &other)
	{
		*this->_brain = other.getBrain();
		this->_type = other.getType();
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->void            WrongCat::setBrain(const string idea);                 */
/*   ->void            WrongCat::setBrain(const Brain& newBrain);             */
/*   ->const Brain&    WrongCat::getBrain(void) const;                        */
/*                                                                            */
/* ************************************************************************** */

void	WrongCat::setBrain(const string idea)
{
	if (setCheck == true)
		delete this->_brain;
	this->_brain = new Brain(idea);
	setCheck = true;
}

void	WrongCat::setBrain(const Brain& newBrain)
{
	if (setCheck == true)
		delete this->_brain;
	this->_brain = new Brain(newBrain);
	setCheck = true;
}

const Brain&	WrongCat::getBrain(void) const
{
	return (*this->_brain);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->void   WrongCat::makeSound(void) const;                                */
/*   ->void   WrongCat::whoAmI(void) const;                                   */
/*                                                                            */
/* ************************************************************************** */

void	WrongCat::makeSound(void) const
{
	cout << MAGENTA << "WrongMeow! WrongMeow! WrongMeow!" << RESET << endl;
}

void	WrongCat::whoAmI(void) const
{
	string idea = getBrain().getIdea();

	cout << "--------------------" << endl;
	cout << CYAN << "My type is: " << getType() << RESET << endl;
	if (idea != "")
		cout << BLACK << "My idea is: " << idea << RESET << endl;
	else
		cout << BLACK << "I have no idea :(" << RESET << endl;
	makeSound();
	cout << "--------------------" << endl;
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
