/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:54:19 by jyao              #+#    #+#             */
/*   Updated: 2024/05/27 14:36:37 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BANK_HPP
# define	BANK_HPP

# include	<vector>
# include	<functional>

class Bank
{
	private:
		class								Account;
		int									_liquidity;
		std::vector< Account * >			_clientAccounts;
		std::vector< Account * >::iterator	findClientById(const int &idREF);
		std::vector< Account * >::iterator	operator[](const int &idREF);
		const std::vector< Account * >		&getClientAccounts(void) const;
	protected:
	public:
		std::hash< Account * >	ptrHash;
		Bank(void);
		~Bank(void);
		Bank(const Bank &bankREF);
		Bank	&operator=(const Bank &bankREF);

		const int						&getLiquidity(void) const;
		void							addMoney(const int &idREF, const int &valueREF);
		int								createClient(void);
		void							deleteClient(const int &idREF);
		void							modClient(const int &idREF, const int *newID, const int *newValue);
		void							loanToClient(const int &idREF, const int &loanREF);
		friend std::ostream				&operator<<(std::ostream &p_os, const Account &p_account);
		friend std::ostream				&operator<<(std::ostream &p_os, const Bank &p_bank);
};

#endif