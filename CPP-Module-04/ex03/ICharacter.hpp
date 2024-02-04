/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ICharacter.hpp                                                           */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 05:31:17 by Mr. Norkum                               */
/*   Updated: 2024/01/20 05:31:18 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class AMateria;

/* ************************************************************************** */
/*                             ICharacter Class                               */
/* ************************************************************************** */

class ICharacter
{
public:
	//Destructor
	virtual ~ICharacter(void){}

	//Getter
	virtual string const&	getName(void) const = 0;

	//Member functions
	virtual void	equip(AMateria* m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, ICharacter& target) = 0;
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
