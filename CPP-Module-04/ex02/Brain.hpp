/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Brain.hpp                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 14:59:01 by Mr. Norkum                               */
/*   Updated: 2024/01/17 14:59:02 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Norkumstd.hpp"

/* ************************************************************************** */
/*                                Brain Class                                 */
/* ************************************************************************** */

class Brain
{
private:
	string _ideas[100];
public:
	//Orthodox Canonical Form
	Brain(void);
	Brain(const string idea);
	Brain(const Brain& copy);
	~Brain(void);
	Brain&	operator=(const Brain& other);

	//Setters and Getters
	void			setIdea(const string idea);
	void			setIdea(unsigned int idx, const string idea);
	const string&	getIdea(void) const;
	const string&	getIdea(unsigned int idx) const;
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
