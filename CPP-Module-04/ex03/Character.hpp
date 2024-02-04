/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Character.hpp                                                            */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 04:53:19 by Mr. Norkum                               */
/*   Updated: 2024/01/20 04:53:21 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

/* ************************************************************************** */
/*                              Character Class                               */
/* ************************************************************************** */

class Character : public ICharacter
{
private:
	string		_name;
	AMateria*	_inventory[4];
public:
	//Orthodox Canonical Form
	Character(void);
	Character(const string& name);
	Character(const Character& copy);
	~Character(void);
	Character&	operator=(const Character& other);

	//Setters and Getters
	void			setName(const string& name);
	const string&	getName(void) const;

	//Member functions
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
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
