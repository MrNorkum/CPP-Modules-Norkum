/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Point.cpp                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 22:15:30 by Mr. Norkum                               */
/*   Updated: 2024/01/16 22:15:31 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->Point::Point(void);                                                    */
/*   ->Point::Point(const float x, const float y);                            */
/*   ->Point::Point(const Fixed x, const Fixed y);                            */
/*   ->Point::Point(const Point& copy);                                       */
/*   ->Point::~Point(void);                                                   */
/*                                                                            */
/*   ->Point&   Point::operator=(const Point& other);                         */
/*                                                                            */
/* ************************************************************************** */

Point::Point(void) : _x(0), _y(0)
{
	cout << "Default constructor called (Point)" << endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	cout << "Float parameterized constructor called (Point)" << endl;
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y)
{
	cout << "Fixed parameterized constructor called (Point)" << endl;
}

Point::Point(const Point& copy) : _x(copy.getX()), _y(copy.getY())
{
	cout << "Copy constructor called (Point)" << endl;
	*this = copy;
}

Point::~Point(void)
{
	cout << "Destructor called (Point)" << endl;
}

Point&	Point::operator=(const Point& other)
{
	cout << "Copy assignment operator called (Point)" << endl;
	if (this != &other)
	{
		const_cast<Fixed&>(this->_x) = other.getX();
		const_cast<Fixed&>(this->_y) = other.getY();
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->const Fixed&    Point::getX(void) const;                               */
/*   ->const Fixed&    Point::getY(void) const;                               */
/*                                                                            */
/* ************************************************************************** */

const Fixed&	Point::getX(void) const
{
	return (this->_x);
}

const Fixed&	Point::getY(void) const
{
	return (this->_y);
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
