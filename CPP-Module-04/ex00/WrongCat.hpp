/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   WrongCat.hpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 13:49:25 by Mr. Norkum                               */
/*   Updated: 2024/01/17 13:49:26 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

/* ************************************************************************** */
/*                               WrongCat Class                               */
/* ************************************************************************** */

class WrongCat : public WrongAnimal
{
public:
	//Orthodox Canonical Form
	WrongCat(void);
	WrongCat(const WrongCat& copy);
	~WrongCat(void);
	WrongCat&	operator=(const WrongCat& other);

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
