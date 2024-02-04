/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Serializer.hpp                                                           */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/27 08:54:17 by Mr. Norkum                               */
/*   Updated: 2024/01/27 08:54:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"

/* ************************************************************************** */
/*                            Serializer Class                                */
/* ************************************************************************** */

class Serializer
{
private:
	//Private Orthodox Canonical Form
	Serializer(void);
	Serializer(const Serializer& copy);
	~Serializer(void);
	Serializer&	operator=(const Serializer& other);

public:
	//Static Member Functions
	static uintptr_t	serialize(Data *ptr);
	static Data*		deserialize(uintptr_t raw);
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
