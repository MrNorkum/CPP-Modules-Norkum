/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Serializer.cpp                                                           */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/27 08:54:17 by Mr. Norkum                               */
/*   Updated: 2024/01/27 08:54:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/* ************************************************************************** */
/*                    Private Orthodox Canonical Form                         */
/*                                                                            */
/*   ->Serializer::Serializer(void);                                          */
/*   ->Serializer::Serializer(const Serializer& copy);                        */
/*   ->Serializer::~Serializer(void);                                         */
/*                                                                            */
/*   ->Serializer& Serializer::operator=(const Serializer& copy);             */
/*                                                                            */
/* ************************************************************************** */

Serializer::Serializer(void){}

Serializer::Serializer(const Serializer& copy)
{*this = copy;}

Serializer::~Serializer(void){}

Serializer&	Serializer::operator=(const Serializer& other)
{(void)other; return (*this);}

/* ************************************************************************** */
/*                       Static Member Functions                              */
/*                                                                            */
/*   ->uintptr_t    Serializer::serialize(void);                              */
/*   ->Data*        Serializer::deserialize(uintptr_t *raw);                  */
/*                                                                            */
/* ************************************************************************** */

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
