/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   FragTrap.hpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 10:20:56 by Mr. Norkum                               */
/*   Updated: 2024/01/17 10:20:58 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                              FragTrap Class                                */
/* ************************************************************************** */

class FragTrap : public ClapTrap
{
private:
	FragTrap(void);
public:
	//Orthodox Canonical Form
	FragTrap(const string name);
	FragTrap(const FragTrap& copy);
	~FragTrap(void);
	FragTrap&	operator=(const FragTrap& other);

	//Member functions
	void	war(FragTrap& target);
	void	highFivesGuys(void);
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
