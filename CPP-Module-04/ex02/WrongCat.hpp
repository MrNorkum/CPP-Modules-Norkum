/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   WrongCat.hpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/18 20:38:49 by Mr. Norkum                               */
/*   Updated: 2024/01/18 20:38:52 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include "Brain.hpp"

/* ************************************************************************** */
/*                               WrongCat Class                               */
/* ************************************************************************** */

class WrongCat : public WrongAnimal
{
private:
	Brain	*_brain;
	bool	setCheck;
public:
	//Orthodox Canonical Form
	WrongCat(void);
	WrongCat(const string idea);
	WrongCat(const WrongCat& copy);
	~WrongCat(void);
	WrongCat&	operator=(const WrongCat& other);

	//Setters and Getters
	void			setBrain(const string idea);
	void			setBrain(const Brain& newBrain);
	const Brain&	getBrain(void) const;

	//Member function
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
