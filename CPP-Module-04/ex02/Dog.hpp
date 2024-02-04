/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Dog.hpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 16:07:33 by Mr. Norkum                               */
/*   Updated: 2024/01/17 16:07:39 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

/* ************************************************************************** */
/*                                Dog Class                                   */
/* ************************************************************************** */

class Dog : public AAnimal
{
private:
	Brain *_brain;
public:
	//Orthodox Canonical Form
	Dog(void);
	Dog(const string idea);
	Dog(const Dog& copy);
	~Dog(void);
	Dog&	operator=(const Dog& other);

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
