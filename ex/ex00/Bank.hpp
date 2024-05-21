/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:54:19 by jyao              #+#    #+#             */
/*   Updated: 2024/05/21 15:01:22 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BANK_HPP
# define	BANK_HPP

# include	"Account.hpp"
# include	<vector>

class Bank
{
	private:
		int							_liquidity;
		std::vector< Account * >	_clientAccounts;
	protected:
	public:
		Bank(void);
		~Bank(void);
		Bank(const Bank &bankREF);
		Bank	&operator=(const Bank &bankREF);

		const int						&getLiquidity(void) const;
		const std::vector< Account * >	&getClientAccounts(void) const;
};



#endif