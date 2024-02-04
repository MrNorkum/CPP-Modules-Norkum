/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/10 18:27:33 by Mr. Norkum                               */
/*   Updated: 2024/01/10 18:27:34 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define BLUE	"\033[34m"
#define YELLOW	"\033[33m"
#define PURPLE	"\033[35m"

void	pressEnter(void)
{
	cout << endl;
	cout << "press ENTER to continue";
	cout << endl;
	std::cin.ignore();
	cout << "\033c";
}

void	debugMessage(const string color, const string msg)
{
	cout << endl;
	cout << color;
	cout << msg << "> ";
	cout << RESET;
	cout << endl;
}

void titleHeader(const string& message)
{
	cout << "\033c";
	int standartSize = 34;
	int messageSize = message.length();
	int spaces = (standartSize - messageSize) / 2;

	cout << "************************************" << endl << "*";
	for (int i = 0; i < spaces; i++)
		cout << " ";
	cout << message;
	for (int i = 0; i < spaces; i++)
		cout << " ";
	cout << "*" << endl << "************************************" << endl;
}

int	main(void)
{
	{
		titleHeader("SHRUBBERY TEST");

		debugMessage(BLUE, "Constructors");
		Bureaucrat *theDefault = 0;
		Bureaucrat *theFarmer = 0;
		AForm *theForm = 0;
		try
		{
			theDefault = new Bureaucrat();
			theFarmer = new Bureaucrat("Sta. Klaus", 100);
			theForm = new ShrubberyCreationForm("North_Pole");
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
			delete theDefault; delete theFarmer;
			delete theForm;
		}
		debugMessage(GREEN, "Status");
		cout << *theFarmer << endl;
		cout << *theForm << endl;
		try
		{
			debugMessage(PURPLE, "Action");
			theFarmer->signForm(*theForm);
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
		}
		debugMessage(GREEN, "Status");
		cout << *theFarmer << endl;
		cout << *theForm << endl;
		try
		{
			debugMessage(PURPLE, "Action");
			theDefault->executeForm(*theForm);
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
		}
		try
		{
			debugMessage(PURPLE, "Action");
			theFarmer->executeForm(*theForm);
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
		}
		debugMessage(RED, "Destructors");
		delete theFarmer;
		delete theDefault;
		delete theForm;
	}
	pressEnter();
	{
		titleHeader("ROBOTOMY TEST");

		debugMessage(BLUE, "Constructors");
		Bureaucrat *theMadDoctor = 0;
		Bureaucrat *theMadAssistent = 0;
		AForm *theForm = 0;
		try
		{
			theMadDoctor = new Bureaucrat("Dr. Madness", 1);
			theMadAssistent = new Bureaucrat("Mad Assistent", 72);
			theForm = new RobotomyRequestForm("experiment");
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
			delete theMadDoctor; delete theMadAssistent;
			delete theForm;
		}

		debugMessage(GREEN, "Status");
		cout << *theMadDoctor << endl;
		cout << *theMadAssistent << endl;
		cout << *theForm << endl;
		try
		{
			debugMessage(PURPLE, "Action");
			theForm->beSigned(*theMadAssistent);
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
		}
		debugMessage(GREEN, "Status");
		cout << *theMadDoctor << endl;
		cout << *theMadAssistent << endl;
		cout << *theForm << endl;
		try
		{
			debugMessage(PURPLE, "Action");
			theMadAssistent->executeForm(*theForm);
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
		}
		for (int i = 0; i < 4; i++)
		{
			try
			{
				debugMessage(PURPLE, "Action");
				theMadDoctor->executeForm(*theForm);
			}
			catch(const exception& e)
			{
				std::cerr << e.what() << endl;
			}
			std::system("sleep 0.2");
		}
		debugMessage(RED, "Destructors");
		delete theMadDoctor;
		delete theMadAssistent;
		delete theForm;
	}
	pressEnter();
	{
		titleHeader("PRESIDENTIAL PARDON TEST");

		debugMessage(BLUE, "Constructors");
		Bureaucrat *thePresident = 0;
		Bureaucrat *theVicePresident = 0;
		AForm *theForm = 0;
		try
		{
			thePresident = new Bureaucrat("President", 1);
			theVicePresident = new Bureaucrat("Vice President", 25);
			theForm = new PresidentialPardonForm("Vice President's Son");
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
			delete thePresident; delete theVicePresident;
			delete theForm;
		}

		debugMessage(GREEN, "Status");
		cout << *thePresident << endl;
		cout << *theVicePresident << endl;
		cout << *theForm << endl;
		try
		{
			debugMessage(PURPLE, "Action");
			thePresident->executeForm(*theForm);
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
		}
		try
		{
			debugMessage(PURPLE, "Action");
			theForm->beSigned(*theVicePresident);
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
		}
		debugMessage(GREEN, "Status");
		cout << *thePresident << endl;
		cout << *theVicePresident << endl;
		cout << *theForm << endl;
		try
		{
			debugMessage(PURPLE, "Action");
			theVicePresident->executeForm(*theForm);
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
		}
		try
		{
			debugMessage(PURPLE, "Action");
			thePresident->executeForm(*theForm);
		}
		catch(const exception& e)
		{
			std::cerr << e.what() << endl;
		}
		debugMessage(RED, "Destructors");
		delete thePresident;
		delete theVicePresident;
		delete theForm;
	}
	pressEnter();
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
