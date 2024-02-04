/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Zombie.hpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 10:03:26 by Mr. Norkum                               */
/*   Updated: 2024/01/16 10:03:28 by Mr. Norkum                               */
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
	Zombie(string name);
	~Zombie(void);

	//Setter and Getter
	void			setName(string name);
	const string&	getName(void) const;

	//Member functions
	void			announce(void);
};

//Non Member Functions
Zombie	*newZombie(string name);
void	randomChump(string name);

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
