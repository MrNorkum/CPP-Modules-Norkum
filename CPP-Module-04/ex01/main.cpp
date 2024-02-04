/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 16:44:28 by Mr. Norkum                               */
/*   Updated: 2024/01/17 16:44:29 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

//MAX_ANIMALS must be an even number greater than 1
#define MAX_ANIMALS 10

int main(void)
{
	if (MAX_ANIMALS < 2 || MAX_ANIMALS % 2 != 0)
	{
		cout << "MAX_ANIMALS must be an even number greater than 1" << endl;
		return (1);
	}

	const Animal* animals[MAX_ANIMALS];

	for (size_t i = 0; i < MAX_ANIMALS; i++)
		animals[i] = 0;

	try
	{
		for (size_t i = 0; i < MAX_ANIMALS; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog("2+2=4");
			else
				animals[i] = new Cat("2+2=5");
		}

		for (size_t i = 0; i < MAX_ANIMALS; i++)
			animals[i]->whoAmI();

		for (size_t i = 0; i < MAX_ANIMALS; i++)
			delete animals[i];
	}
	catch (const bad_alloc& e)
	{
		cout << e.what() << endl;
		for (size_t i = 0; i < MAX_ANIMALS; i++)
			delete animals[i];
	}
	return (0);
}

//int	main(void)
//{
//	const Animal* animal = 0;
//	const Animal* cat = 0;
//	const Animal* dog = 0;
//
//	const WrongAnimal* wronganimal = 0;
//	const WrongAnimal* wrongCat = 0;
//
//	try
//	{
//		{
//			animal = new Animal();
//			cat = new Cat();
//			dog = new Dog();
//
//			animal->whoAmI();
//			cat->whoAmI();
//			dog->whoAmI();
//
//			delete animal;
//			delete cat;
//			delete dog;
//		}
//		cout << "**********************" << endl;
//		cout << "**********************" << endl;
//		{
//			wronganimal = new WrongAnimal();
//			wrongCat = new WrongCat();
//
//			wronganimal->whoAmI();
//			wrongCat->whoAmI();
//
//			delete wronganimal;
//			delete wrongCat;
//		}
//	}
//	catch(const bad_alloc& e)
//	{
//		cout << e.what() << endl;
//		delete animal; delete cat; delete dog;
//		delete wronganimal; delete wrongCat;
//	}
//	return (0);
//}

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
