/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:32:15 by jyao              #+#    #+#             */
/*   Updated: 2024/05/21 19:50:37 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ACCOUNT_HPP
# define	ACCOUNT_HPP

# include	<exception>
# include	"Bank.hpp"

class Bank::Account
{
	private:
	protected:
	public:
		int		_id;
		int		_value;

		Account(void);
		~Account(void);
		Account(const Account &accountREF);
		Account	&operator=(const Account &accountREF);

		const int	&getId(void) const;
		const int	&getValue(void) const;
		bool		operator()(const Account *accountREF);
};

#endif