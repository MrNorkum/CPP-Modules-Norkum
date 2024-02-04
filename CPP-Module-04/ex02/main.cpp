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

int main(void)
{
	try
	{
		const AAnimal* aanimals[10];

		for (int i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
				aanimals[i] = new Dog("2+2=4");
			else
				aanimals[i] = new Cat("2+2=5");
		}
		for (int i = 0; i < 10; i++)
		{
			aanimals[i]->whoAmI();
		}
		for (int i = 0; i < 10; i++)
		{
			delete aanimals[i];
		}
	}
	catch (const exception& e)
	{
		cerr << e.what() << endl;
	}
	return (0);
}

//int	main(void)
//{
//	try
//	{
//		{
//			//const AAnimal* aanimal = new AAnimal();
//			const AAnimal* cat = new Cat();
//			const AAnimal* dog = new Dog();
//
//			//aanimal->whoAmI();
//			cat->whoAmI();
//			dog->whoAmI();
//
//			//delete aanimal;
//			delete cat;
//			delete dog;
//		}
//		cout << "**********************" << endl;
//		cout << "**********************" << endl;
//		{
//			const WrongAnimal* wronganimal = new WrongAnimal();
//			const WrongAnimal* wrongCat = new WrongCat();
//
//			wronganimal->whoAmI();
//			wrongCat->whoAmI();
//
//			delete wronganimal;
//			delete wrongCat;
//		}
//	}
//	catch(const exception& e)
//	{
//		cerr << e.what() << '\n';
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
