/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanA.hpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 13:33:53 by Mr. Norkum                               */
/*   Updated: 2024/01/16 13:33:54 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

/* ************************************************************************** */
/*                               HumanA Class                                 */
/* ************************************************************************** */

class HumanA
{
private:
	Weapon&	_weapon;
	string	_name;
public:
	//Constructor and Destructor
	HumanA(string name, Weapon& weapon);
	~HumanA(void);

	//Setters and Getters
	void			setWeapon(Weapon& weapon);
	void			setName(const string name);
	const string&	getName(void) const;
	const Weapon&	getWeapon(void) const;

	//Member functions
	void			attack(void) const;
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
