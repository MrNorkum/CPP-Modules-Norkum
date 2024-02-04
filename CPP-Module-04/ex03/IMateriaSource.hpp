/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   IMateriaSource.hpp                                                       */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 04:54:08 by Mr. Norkum                               */
/*   Updated: 2024/01/20 04:54:09 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

/* ************************************************************************** */
/*                            IMateriaSource Class                            */
/* ************************************************************************** */

class IMateriaSource
{
public:
	//Destructor
	virtual ~IMateriaSource(void){};

	//Member functions
	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(string const& type) = 0;
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
