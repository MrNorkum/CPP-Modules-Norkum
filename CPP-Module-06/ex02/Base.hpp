/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Base.hpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/27 08:54:17 by Mr. Norkum                               */
/*   Updated: 2024/01/27 08:54:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include "Norkumstd.hpp"

/* ************************************************************************** */
/*                                Base Class                                  */
/* ************************************************************************** */

class Base
{
public:
	//Destructor
	virtual ~Base(void);
};

/* ************************************************************************** */
/*                                A-B-C Class                                 */
/* ************************************************************************** */

class A : public Base {};

class B : public Base {};

class C : public Base {};

//Non Member Functions
Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

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

