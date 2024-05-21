/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:32:15 by jyao              #+#    #+#             */
/*   Updated: 2024/05/21 14:41:50 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ACCOUNT_HPP
# define	ACCOUNT_HPP

class Account
{
	private:
		int	_id;
		int	_value;
	protected:
	public:
		Account(void);
		~Account(void);
		Account(const Account &AccountREF);
		Account	&operator=(const Account &AccountREF);

		const int	&getId(void) const;
		const int	&getValue(void) const;
};

#endif