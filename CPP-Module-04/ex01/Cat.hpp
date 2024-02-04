/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Cat.hpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 15:54:05 by Mr. Norkum                               */
/*   Updated: 2024/01/17 15:54:12 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

/* ************************************************************************** */
/*                                Cat Class                                   */
/* ************************************************************************** */

class Cat : public Animal
{
private:
	Brain*	_brain;
public:
	//Orthodox Canonical Form
	Cat(void);
	Cat(const string idea);
	Cat(const Cat& copy);
	~Cat(void);
	Cat&	operator=(const Cat& other);

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
