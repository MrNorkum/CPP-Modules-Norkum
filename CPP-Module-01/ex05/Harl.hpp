/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Harl.hpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 16:41:47 by Mr. Norkum                               */
/*   Updated: 2024/01/16 16:41:48 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

#define cin std::cin
#define cout std::cout
#define endl std::endl
#define string std::string
#define getline std::getline

/* ************************************************************************** */
/*                                 Harl Class                                 */
/* ************************************************************************** */

class Harl
{
private:
	//Private Member Functions
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	fatal(void);
public:
	//Public Member Functions
	void	complain(string level);
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
