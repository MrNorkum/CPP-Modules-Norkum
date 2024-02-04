/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Data.hpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/27 08:54:17 by Mr. Norkum                               */
/*   Updated: 2024/01/27 08:54:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include "Norkumstd.hpp"

/* ************************************************************************** */
/*                                Data Struct                                 */
/* ************************************************************************** */

typedef struct Data
{
private:
	uintptr_t	_raw;
public:
	//Orthodox Canonical Form
	Data(void);
	Data(uintptr_t raw);
	Data(const Data& copy);
	~Data(void);
	Data&	operator=(const Data& other);

	//Setters and Getters
	void				setRaw(uintptr_t raw);
	const uintptr_t&	getRaw(void) const;
}				Data;

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
