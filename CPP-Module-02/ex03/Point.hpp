/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Point.hpp                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 22:09:29 by Mr. Norkum                               */
/*   Updated: 2024/01/16 22:09:30 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

/* ************************************************************************** */
/*                                Point Class                                 */
/* ************************************************************************** */

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;
public:
	//Orthodox Canonical Form
	Point(void);
	Point(const float x, const float y);
	Point(const Fixed x, const Fixed y);
	Point(const Point& copy);
	~Point(void);
	Point&	operator=(const Point& other);

	//Setters and Getters
	Fixed&	getX(void) const;
	Fixed&	getY(void) const;
};

//Non Member Functions
bool	bsp(Point const a, Point const b, Point const c, Point const point);

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
