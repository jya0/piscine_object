/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:56:11 by jyao              #+#    #+#             */
/*   Updated: 2024/05/21 15:11:03 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bank.hpp"
#include	<iostream>

Bank::Bank(void): _liquidity(0)
{
}

Bank::~Bank(void)
{
}

Bank::Bank(const Bank &bankREF)
{
	this->operator=(bankREF);
}

Bank	&Bank::operator=(const Bank &bankREF)
{
	if (this != &bankREF)
	{
	}
	return (*this);
}

const int	&Bank::getLiquidity(void) const
{
	return (this->_liquidity);
}

const std::vector< Account * >	&Bank::getClientAccounts(void) const
{
	return (this->_clientAccounts);
}

std::ostream	&operator<<(std::ostream &p_os, const Bank &p_bank)
{
	p_os << "Bank informations : " << std::endl;
	p_os << "Liquidity : " << p_bank.getLiquidity() << std::endl;
	for (std::vector< Account * >::const_iterator itc = p_bank.getClientAccounts().cbegin(); itc != p_bank.getClientAccounts().end(); ++itc)
		p_os << *itc << std::endl;
	return (p_os);
}
