/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   WrongAnimal.hpp                                                          */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 13:39:21 by Mr. Norkum                               */
/*   Updated: 2024/01/17 13:39:23 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "Norkumstd.hpp"

/* ************************************************************************** */
/*                            WrongAnimal Class                               */
/* ************************************************************************** */

class WrongAnimal
{
protected:
	string _type;
public:
	//Orthodox Canonical Form
	WrongAnimal(void);
	WrongAnimal(const string type);
	WrongAnimal(const WrongAnimal& copy);
	virtual ~WrongAnimal(void);
	WrongAnimal&	operator=(const WrongAnimal& other);

	//Setters and Getters
	void			setType(const string type);
	const string&	getType(void) const;

	//Member functions
	void			makeSound(void) const;
	void			whoAmI(void) const;
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
