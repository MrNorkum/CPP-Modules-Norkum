/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Dog.cpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 16:14:53 by Mr. Norkum                               */
/*   Updated: 2024/01/17 16:14:54 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->Dog::Dog(void);                                                        */
/*   ->Dog::Dog(const string idea);                                           */
/*   ->Dog::Dog(const Dog& copy);                                             */
/*   ->Dog::~Dog(void);                                                       */
/*                                                                            */
/*   ->Dog&   Dog::operator=(const Dog& other);                               */
/*                                                                            */
/* ************************************************************************** */

Dog::Dog(void)
{
	cout << GREEN << "Default constructor called (Dog)" << RESET << endl;
	this->_brain = new Brain();
	setType("Dog");
}

Dog::Dog(const string idea)
{
	cout << GREEN << "Idea parameterized constructor called (Dog)" << RESET << endl;
	this->_brain = new Brain(idea);
	setType("Dog");
}

Dog::Dog(const Dog& copy)
{
	cout << GREEN << "Copy constructor called (Dog)" << RESET << endl;
	this->_brain = new Brain(copy.getBrain());
	setType("Dog");
}

Dog::~Dog(void)
{
	delete this->_brain;
	cout << RED << "Destructor called (Dog)" << RESET << endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	cout << YELLOW << "Copy assignment operator called (Dog)" << RESET << endl;
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
/*   ->void            Dog::setBrain(const string idea);                      */
/*   ->void            Dog::setBrain(const Brain& newBrain);                  */
/*   ->const Brain&    Dog::getBrain(void) const;                             */
/*                                                                            */
/* ************************************************************************** */

void	Dog::setBrain(const string idea)
{
	delete this->_brain;
	this->_brain = new Brain(idea);
}

void	Dog::setBrain(const Brain& newBrain)
{
	delete this->_brain;
	this->_brain = new Brain(newBrain);
}

const Brain&	Dog::getBrain(void) const
{
	return (*this->_brain);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->void   Dog::makeSound(void) const;                                     */
/*   ->void   Dog::whoAmI(void) const;                                        */
/*                                                                            */
/* ************************************************************************** */

void	Dog::makeSound(void) const
{
	cout << MAGENTA << "Woof! Woof! Woof!" << RESET << endl;
}

void	Dog::whoAmI(void) const
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
