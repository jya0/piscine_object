/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:34:34 by jyao              #+#    #+#             */
/*   Updated: 2024/05/21 15:35:06 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Account.hpp"
#include	<iostream>

Account::Account(void): _id(-1), _value(0)
{
}

Account::~Account(void)
{
}

Account::Account(const Account &accountREF)
{
	this->operator=(accountREF);
}

Account	&Account::operator=(const Account &accountREF)
{
	if (this != &accountREF)
	{
		this->_id		= accountREF.getId();
		this->_value	= accountREF.getValue();
	}
	return (*this);
}

const int	&Account::getId(void) const
{
	return (this->_id);
}

const int	&Account::getValue(void) const
{
	return (this->_value);
}

void	Account::addMoney(const int &moneyREF) throw()
{
	int	old_value;

	old_value = this->_value;
	this->_value += moneyREF;
}

std::ostream	&operator<<(std::ostream &p_os, const Account &p_account)
{
	p_os << "[" << p_account.getId() << "] - [" << p_account.getValue() << "]";
	return (p_os);
}
