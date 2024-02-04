/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   MateriaSource.cpp                                                        */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 04:54:52 by Mr. Norkum                               */
/*   Updated: 2024/01/20 04:54:59 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->MateriaSource::MateriaSource(void);                                    */
/*   ->MateriaSource::MateriaSource(const MateriaSource& copy);               */
/*   ->MateriaSource::~MateriaSource(void);                                   */
/*                                                                            */
/*   ->MateriaSource&   MateriaSource::operator=(const MateriaSource& other); */
/*                                                                            */
/* ************************************************************************** */

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_learnedMaterias[i] = NULL;
	setNumLearned(0);
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < getNumLearned(); i++)
		delete _learnedMaterias[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < getNumLearned(); i++)
			delete _learnedMaterias[i];
		for (int i = 0; i < other.getNumLearned(); i++)
			this->_learnedMaterias[i] = other._learnedMaterias[i]->clone();
		setNumLearned(other.getNumLearned());
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->void    MateriaSource::setNumLearned(const int numLearned);            */
/*   ->int     MateriaSource::getNumLearned(void) const;                      */
/*                                                                            */
/* ************************************************************************** */

void	MateriaSource::setNumLearned(const int numLearned)
{
	this->_numLearned = numLearned;
}

int	MateriaSource::getNumLearned(void) const
{
	return (this->_numLearned);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->void         MateriaSource::learnMateria(AMateria* m);                 */
/*   ->AMateria*    MateriaSource::createMateria(string const& type);         */
/*                                                                            */
/* ************************************************************************** */

void	MateriaSource::learnMateria(AMateria* m)
{
	if (getNumLearned() < 4)
	{
		this->_learnedMaterias[getNumLearned()] = m;
		setNumLearned(getNumLearned() + 1);
	}
}

AMateria*	MateriaSource::createMateria(string const& type)
{
	for (int i = 0; i < getNumLearned(); i++)
	{
		if (this->_learnedMaterias[i]->getType() == type)
			return (this->_learnedMaterias[i]->clone());
	}
	return (NULL);
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
