/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/27 08:54:17 by Mr. Norkum                               */
/*   Updated: 2024/01/27 08:54:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	{
		Data	*ptr  = 0;
		Data	*ptr2 = 0;
		uintptr_t raw = 0;

		try
		{
			ptr = new Data(65);
			raw = Serializer::serialize(ptr);
			ptr2 = Serializer::deserialize(raw);

			cout << "************************" << endl;
			cout << ptr->getRaw() << endl;
			cout << ptr2->getRaw() << endl;
			cout << raw << endl;
			cout << Serializer::serialize(ptr2) << endl;
			cout << "************************" << endl;
			delete ptr;
		}
		catch(const exception& e)
		{
			cerr << e.what() << endl;
		}
	}
	{
		Data	*ptr = 0;
		uintptr_t raw = 0;
		uintptr_t raw2 = 0;

		raw = reinterpret_cast<uintptr_t>((Data [1]){30});
		ptr = Serializer::deserialize(raw);
		raw2 = Serializer::serialize(ptr);

		cout << "************************" << endl;
		cout << ptr->getRaw() << endl;
		cout << Serializer::deserialize(raw2)->getRaw() << endl;
		cout << raw << endl;
		cout << raw2 << endl;
		cout << "************************" << endl;
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
