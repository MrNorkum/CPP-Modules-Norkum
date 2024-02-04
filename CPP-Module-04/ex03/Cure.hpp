/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Cure.hpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 04:53:38 by Mr. Norkum                               */
/*   Updated: 2024/01/20 04:53:39 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

/* ************************************************************************** */
/*                                Cure Class                                  */
/* ************************************************************************** */

class Cure : public AMateria
{
public:
	//Orthodox Canonical Form
	Cure(void);
	Cure(const Cure& copy);
	~Cure(void);
	Cure&	operator=(const Cure& other);

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
