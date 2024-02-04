/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 14:07:30 by Mr. Norkum                               */
/*   Updated: 2024/01/17 14:07:32 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* animal = 0;
	const Animal* cat = 0;
	const Animal* dog = 0;

	const WrongAnimal* wronganimal = 0;
	const WrongAnimal* wrongCat = 0;

	try
	{
		{
			animal = new Animal();
			cat = new Cat();
			dog = new Dog();

			animal->whoAmI();
			cat->whoAmI();
			dog->whoAmI();

			delete animal;
			delete cat;
			delete dog;
		}
		cout << "**********************" << endl;
		cout << "**********************" << endl;
		{
			wronganimal = new WrongAnimal();
			wrongCat = new WrongCat();

			wronganimal->whoAmI();
			wrongCat->whoAmI();

			delete wronganimal;
			delete wrongCat;
		}
	}
	catch (const bad_alloc& e)
	{
		cout << e.what() << endl;
		delete animal; delete cat; delete dog;
		delete wronganimal; delete wrongCat;
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
