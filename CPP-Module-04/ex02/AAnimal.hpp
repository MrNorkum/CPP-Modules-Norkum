/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   AAnimal.hpp                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 01:20:33 by Mr. Norkum                               */
/*   Updated: 2024/01/20 01:20:34 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "Norkumstd.hpp"

/* ************************************************************************** */
/*                               AAnimal Class                                */
/* ************************************************************************** */

class AAnimal
{
protected:
	string _type;
public:
	//Orthodox Canonical Form
	AAnimal(void);
	AAnimal(const string type);
	AAnimal(const AAnimal& copy);
	virtual ~AAnimal(void);
	AAnimal&	operator=(const AAnimal& other);

	//Setters and Getters
	void			setType(const string type);
	const string&	getType(void) const;

	//Member functions
	virtual void	makeSound(void) const = 0;
	virtual void	whoAmI(void) const = 0;
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
