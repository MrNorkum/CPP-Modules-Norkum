/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 04:54:19 by Mr. Norkum                               */
/*   Updated: 2024/01/20 04:54:21 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
	IMateriaSource* src = 0;
	ICharacter* me = 0;
	ICharacter* bob = 0;

	try
	{
		src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		me = new Character("me");

		AMateria*	tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	catch(const bad_alloc& e)
	{
		cout << e.what() << endl;
		delete bob; delete me; delete src;
	}
	return (0);
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
