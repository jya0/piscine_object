/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:34:34 by jyao              #+#    #+#             */
/*   Updated: 2024/05/21 14:50:07 by jyao             ###   ########.fr       */
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

Account::Account(const Account &AccountREF)
{
	this->operator=(AccountREF);
}

Account	&Account::operator=(const Account &AccountREF)
{
	if (this != &AccountREF)
	{
		
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

std::ostream	&operator<<(std::ostream &p_os, const Account &p_account)
{
	p_os << "[" << p_account.getId() << "] - [" << p_account.getValue() << "]";
	return (p_os);
}
