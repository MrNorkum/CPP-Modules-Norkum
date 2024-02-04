/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   AMateria.hpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 04:53:02 by Mr. Norkum                               */
/*   Updated: 2024/01/20 04:53:03 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "Norkumstd.hpp"
# include "ICharacter.hpp"

class ICharacter;

/* ************************************************************************** */
/*                              AMateria Class                                */
/* ************************************************************************** */

class AMateria
{
protected:
	string _type;
public:
	//Orthodox Canonical Form
	AMateria(void);
	AMateria(string const& type);
	AMateria(AMateria const& copy);
	virtual ~AMateria(void);
	AMateria&	operator=(AMateria const& other);

	//Setters and Getters
	void				setType(string const& type);
	string const&		getType() const; //Returns the materia type

	//Member functions
	virtual AMateria*	clone(void) const = 0;
	virtual void		use(ICharacter& target);
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
