/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Ice.hpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 04:53:59 by Mr. Norkum                               */
/*   Updated: 2024/01/20 04:54:00 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

/* ************************************************************************** */
/*                                Ice Class                                   */
/* ************************************************************************** */

class Ice : public AMateria
{
public:
	//Orthodox Canonical Form
	Ice(void);
	Ice(const Ice& copy);
	~Ice(void);
	Ice&	operator=(const Ice& other);

	//Member functions
	void		use(ICharacter& target);
	AMateria*	clone(void) const;
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
