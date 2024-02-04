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

#include "Cat.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->Cat::Cat(void);                                                        */
/*   ->Cat::Cat(const string idea);                                           */
/*   ->Cat::Cat(const Cat& copy);                                             */
/*   ->Cat::~Cat(void);                                                       */
/*                                                                            */
/*   ->Cat&   Cat::operator=(const Cat& other);                               */
/*                                                                            */
/* ************************************************************************** */

Cat::Cat(void)
{
	cout << GREEN << "Default constructor called (Cat)" << RESET << endl;
	this->_brain = new Brain();
	setType("Cat");
}

Cat::Cat(const string idea)
{
	cout << GREEN << "Idea parameterized constructor called (Cat)" << RESET << endl;
	this->_brain = new Brain(idea);
	setType("Cat");
}

Cat::Cat(const Cat& copy)
{
	cout << GREEN << "Copy constructor called (Cat)" << RESET << endl;
	this->_brain = new Brain(copy.getBrain());
	setType("Cat");
}

Cat::~Cat(void)
{
	delete this->_brain;
	cout << RED << "Destructor called (Cat)" << RESET << endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	cout << YELLOW << "Copy assignment operator called (Cat)" << RESET << endl;
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
/*   ->void            Cat::setBrain(const string idea);                      */
/*   ->void            Cat::setBrain(const Brain& newBrain);                  */
/*   ->const Brain&    Cat::getBrain(void) const;                             */
/*                                                                            */
/* ************************************************************************** */

void	Cat::setBrain(const string idea)
{
	delete this->_brain;
	this->_brain = new Brain(idea);
}

void	Cat::setBrain(const Brain& newBrain)
{
	delete this->_brain;
	this->_brain = new Brain(newBrain);
}

const Brain&	Cat::getBrain(void) const
{
	return (*this->_brain);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->void   Cat::makeSound(void) const;                                     */
/*   ->void   Cat::whoAmI(void) const;                                        */
/*                                                                            */
/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	cout << MAGENTA << "Meow! Meow! Meow!" << RESET << endl;
}

void	Cat::whoAmI(void) const
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
