/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Cat.hpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 11:07:29 by Mr. Norkum                               */
/*   Updated: 2024/01/17 11:07:32 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

/* ************************************************************************** */
/*                                Cat Class                                   */
/* ************************************************************************** */

class Cat : public Animal
{
public:
	//Orthodox Canonical Form
	Cat(void);
	Cat(const Cat& copy);
	~Cat(void);
	Cat&	operator=(const Cat& other);

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
