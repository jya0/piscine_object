/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:56:11 by jyao              #+#    #+#             */
/*   Updated: 2024/05/27 14:44:16 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bank.hpp"
#include	"Account.hpp"
#include	"exceptions.hpp"
#include	<iostream>
#include	<cmath>

Bank::Bank(void): _liquidity(0)
{
}

Bank::~Bank(void)
{
	for (std::vector< Bank::Account * >::iterator it = this->_clientAccounts.begin(); it != this->_clientAccounts.end(); ++it)
		delete *it;
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

const std::vector< Bank::Account * >	&Bank::getClientAccounts(void) const
{
	return (this->_clientAccounts);
}

std::vector< Bank::Account * >::iterator	Bank::findClientById(const int &idREF)
{
	Account	idCmpFunctor;

	idCmpFunctor._id = idREF;
	return (std::find_if(_clientAccounts.begin(), _clientAccounts.end(), idCmpFunctor));
}

std::vector< Bank::Account * >::iterator	Bank::operator[](const int &idREF)
{
	std::vector< Bank::Account * >::iterator	accountIt;

	accountIt = findClientById(idREF);
	if (accountIt == _clientAccounts.end())
		throw (DnRnamespace::InvalidIdException());
	return (accountIt);
}

void	Bank::addMoney(const int &idREF, const int &valueREF)
{
	int	ceilClientValue;
	int	floorBankInterest;
	std::vector< Bank::Account * >::iterator	accountIt;

	DnRnamespace::isNegativeValue(valueREF);
	ceilClientValue = ceil((float)valueREF * 0.95f);
	floorBankInterest = floor((float)valueREF * 0.05f);
	accountIt = this->operator[](idREF);
	DnRnamespace::isNegativeValue((*accountIt)->getValue() + ceilClientValue);
	DnRnamespace::isNegativeValue(this->_liquidity + floorBankInterest);
	(*accountIt)->_value += ceilClientValue;
	this->_liquidity += floorBankInterest;
}

int	Bank::createClient(void)
{
	Account	*newClient;

	newClient = new Account();
	newClient->_id = ptrHash(newClient);
	if (findClientById(newClient->_id) != _clientAccounts.end())
	{
		delete (newClient);
		throw (DnRnamespace::DuplicateIdException());
	}
	this->_clientAccounts.push_back(newClient);
	return (newClient->_id);
}

void	Bank::deleteClient(const int &idREF)
{
	_clientAccounts.erase(this->operator[](idREF));
}

void	Bank::modClient(const int &idREF, const int *newID, const int *newValue)
{
	std::vector< Bank::Account * >::iterator	accountIt;

	accountIt = this->operator[](idREF);
	if (newID)
	{
		if (findClientById(*newID) != _clientAccounts.end())
			throw (DnRnamespace::DuplicateIdException());
		(*accountIt)->_id = *newID;
	}
	if (newValue)
	{
		DnRnamespace::isNegativeValue(*newValue);
		(*accountIt)->_value = *newValue;
	}
}

void	Bank::loanToClient(const int &idREF, const int &loanREF)
{
	DnRnamespace::isNegativeValue(_liquidity - loanREF);
	this->addMoney(idREF, loanREF);
	_liquidity -= loanREF;
}

std::ostream	&operator<<(std::ostream &p_os, const Bank::Account &p_account)
{
	p_os << "[" << p_account.getId() << "] - [" << p_account.getValue() << "]";
	return (p_os);
}

std::ostream	&operator<<(std::ostream &p_os, const Bank &p_bank)
{
	p_os << "Bank informations : " << std::endl;
	p_os << "Liquidity : " << p_bank.getLiquidity() << std::endl;
	for (std::vector< Bank::Account * >::const_iterator itc = p_bank.getClientAccounts().cbegin(); itc != p_bank.getClientAccounts().end(); ++itc)
		p_os << **itc << std::endl;
	return (p_os);
}

