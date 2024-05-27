/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:34:34 by jyao              #+#    #+#             */
/*   Updated: 2024/05/27 17:23:39 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Account.hpp"
#include	"exceptions.hpp"
#include	<iostream>

Bank::Account::Account(void): _id(-1), _value(0)
{
}

Bank::Account::~Account(void)
{
}

Bank::Account::Account(const Account &accountREF)
{
	this->operator=(accountREF);
}

Bank::Account	&Bank::Account::operator=(const Account &accountREF)
{
	if (this != &accountREF)
	{
		this->_id		= accountREF._id;
		this->_value	= accountREF._value;
	}
	return (*this);
}

const int	&Bank::Account::getId(void) const
{
	return (this->_id);
}

const int	&Bank::Account::getValue(void) const
{
	return (this->_value);
}

bool	Bank::Account::operator()(const Account *accountREF)
{
	return (this->_id == accountREF->_id);
}