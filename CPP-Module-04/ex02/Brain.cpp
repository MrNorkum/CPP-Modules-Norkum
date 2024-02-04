/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Brain.cpp                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 15:49:41 by Mr. Norkum                               */
/*   Updated: 2024/01/17 15:49:43 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->Brain::Brain(void);                                                    */
/*   ->Brain::Brain(const string idea);                                       */
/*   ->Brain::Brain(const Brain& copy);                                       */
/*   ->Brain::~Brain(void);                                                   */
/*                                                                            */
/*   ->Brain&   Brain::operator=(const Brain& other);                         */
/*                                                                            */
/* ************************************************************************** */

Brain::Brain(void)
{
	cout << GREEN << "Default constructor called (Brain)" << RESET << endl;
	setIdea("");
}

Brain::Brain(const string idea)
{
	cout << GREEN << "Idea parameterized constructor called (Brain)" << RESET << endl;
	setIdea(idea);
}

Brain::Brain(const Brain& copy)
{
	cout << GREEN << "Copy constructor called (Brain)" << RESET << endl;
	*this = copy;
}

Brain::~Brain(void)
{
	cout << RED << "Destructor called (Brain)" << RESET << endl;
}

Brain&	Brain::operator=(const Brain& other)
{
	cout << YELLOW << "Copy assignment operator called (Brain)" << RESET << endl;
	if (this != &other)
	{
		setIdea(other.getIdea());
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->void            Brain::setIdea(const string idea);                     */
/*   ->void            Brain::setIdea(unsigned int idx, const string idea);   */
/*   ->const string&   Brain::getIdea(void) const;                            */
/*   ->const string&   Brain::getIdea(unsigned int idx) const;                */
/*                                                                            */
/* ************************************************************************** */

void	Brain::setIdea(const string idea)
{
	for (int idx = 0; idx < 100; idx++)
		this->_ideas[idx] = idea;
}

void	Brain::setIdea(unsigned int idx, const string idea)
{
	if (idx < 0 || idx > 99)
		return ;
	this->_ideas[idx] = idea;
}

const string&	Brain::getIdea(void) const
{
	return (this->_ideas[0]);
}

const string&	Brain::getIdea(unsigned int idx) const
{
	if (idx > 99)
		idx = 0;
	return (this->_ideas[idx]);
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

