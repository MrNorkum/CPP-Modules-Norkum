/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Dog.hpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 11:14:58 by Mr. Norkum                               */
/*   Updated: 2024/01/17 11:15:01 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

/* ************************************************************************** */
/*                                Dog Class                                   */
/* ************************************************************************** */

class Dog : public Animal
{
public:
	//Orthodox Canonical Form
	Dog(void);
	Dog(const Dog& copy);
	~Dog(void);
	Dog&	operator=(const Dog& other);

	//Member function
	void	makeSound(void) const;
	void	whoAmI(void) const;
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
