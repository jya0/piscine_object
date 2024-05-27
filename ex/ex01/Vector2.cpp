/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:18:40 by jyao              #+#    #+#             */
/*   Updated: 2024/05/27 17:30:45 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<cmath>
#include	"Vector2.hpp"

Vector2::Vector2(void): _xValue(NAN), _yValue(_xValue)
{	
}

Vector2::~Vector2(void)
{
}

Vector2::Vector2(const Vector2 &vector2REF)
{
	this->operator=(vector2REF);
}

Vector2	&Vector2::operator=(const Vector2 &vector2REF)
{
	if (this != &vector2REF)
	{
		this->_xValue = vector2REF._xValue;
		this->_yValue = vector2REF._yValue;
	}
	return (*this);
}

Vector2::Vector2(const float &xValue, const float &yValue)
{
	this->_xValue = xValue;
	this->_yValue = yValue;
}

void		Vector2::setXvalue(const float &xValue)
{
	this->_xValue = xValue;
}

void		Vector2::setYvalue(const float &yValue)
{
	this->_yValue = yValue;
}

const float	&Vector2::getXvalue(void) const
{
	return (this->_xValue);
}

const float	&Vector2::getYvalue(void) const
{
	return (this->_yValue);
}
