/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Zombie.hpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 10:56:03 by Mr. Norkum                               */
/*   Updated: 2024/01/16 10:56:08 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string

/* ************************************************************************** */
/*                               Zombie Class                                 */
/* ************************************************************************** */

class Zombie
{
private:
	string _name;
public:
	//Constructor and Destructor
	Zombie(void);
	Zombie(const string name);
	~Zombie(void);

	//Setter and Getter
	void			setName(const string name);
	const string&	getName(void) const;

	//Member functions
	void			announce(void);
};

//Non Member Functions
Zombie*	zombieHorde(int N, string name);

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
