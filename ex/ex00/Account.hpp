/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:32:15 by jyao              #+#    #+#             */
/*   Updated: 2024/05/21 15:12:34 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ACCOUNT_HPP
# define	ACCOUNT_HPP

# include	<exception>

class Account
{
	private:
		int		_id;
		int		_value;
		void	addMoney(const int &moneyREF) throw();
	protected:
	public:
		Account(void);
		~Account(void);
		Account(const Account &accountREF);
		Account	&operator=(const Account &accountREF);

		const int	&getId(void) const;
		const int	&getValue(void) const;
};

#endif