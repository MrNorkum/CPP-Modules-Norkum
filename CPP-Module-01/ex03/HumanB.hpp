/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanB.hpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 13:36:01 by Mr. Norkum                               */
/*   Updated: 2024/01/16 13:36:02 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

/* ************************************************************************** */
/*                               HumanB Class                                 */
/* ************************************************************************** */

class HumanB
{
private:
	Weapon*	_weapon;
	string	_name;
public:
	//Constructor and Destructor
	HumanB(string name);
	HumanB(string name, Weapon& weapon);
	~HumanB(void);

	//Setters and Getters
	void			setWeapon(const Weapon& weapon);
	void			setName(const string name);
	const Weapon*	getWeapon(void) const;
	const string&	getName(void) const;

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
