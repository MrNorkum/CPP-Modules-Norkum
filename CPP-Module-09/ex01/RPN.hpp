/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   RPN.hpp                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 04:50:29 by Mr. Norkum                               */
/*   Updated: 2024/02/01 04:50:30 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <stack>

# define cout std::cout
# define endl std::endl
# define string std::string
# define stringstream std::stringstream
# define stack std::stack
# define exception std::exception

int		my_stoi(const string& str);
void	check_RPN_format(string arg);
void	RPN_calculator(string arg);

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
