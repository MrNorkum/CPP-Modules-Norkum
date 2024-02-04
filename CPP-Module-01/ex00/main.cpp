/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 10:15:17 by Mr. Norkum                               */
/*   Updated: 2024/01/16 10:15:18 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	try
	{
		Zombie	*x = newZombie("Mr");
		Zombie	Zombie("Norkum");
		Zombie.announce();
		x->announce();
		randomChump("Mr Norkum");
		delete x;
	}
	catch (const std::bad_alloc& e)
	{
		cout << "new: " << e.what() << endl;
	}
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
