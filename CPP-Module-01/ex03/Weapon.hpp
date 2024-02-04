/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Weapon.hpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 14:09:33 by Mr. Norkum                               */
/*   Updated: 2024/01/16 14:09:35 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string

/* ************************************************************************** */
/*                               Weapon Class                                 */
/* ************************************************************************** */

class Weapon
{
private:
	string _type;
public:
	//Constructor and Destructor
	Weapon(void);
	Weapon(string type);
	~Weapon(void);

	//Setters and Getters
	void			setType(const string type);
	const string&	getType(void) const;
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
