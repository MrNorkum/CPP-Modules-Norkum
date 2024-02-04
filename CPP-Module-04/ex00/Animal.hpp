/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Animal.hpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 11:00:55 by Mr. Norkum                               */
/*   Updated: 2024/01/17 11:00:58 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Norkumstd.hpp"

/* ************************************************************************** */
/*                               Animal Class                                 */
/* ************************************************************************** */

class Animal
{
protected:
	string _type;
public:
	//Orthodox Canonical Form
	Animal(void);
	Animal(const string type);
	Animal(const Animal& copy);
	virtual	~Animal(void);
	Animal&	operator=(const Animal& other);

	//Setters and Getters
	void			setType(const string type);
	const string&	getType(void) const;

	//Member functions
	virtual void	makeSound(void) const;
	virtual void	whoAmI(void) const;
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
