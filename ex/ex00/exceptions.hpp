/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:20:27 by jyao              #+#    #+#             */
/*   Updated: 2024/05/21 15:46:14 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		EXCEPTIONS_HPP
# define	EXCEPTIONS_HPP

# include	<exception>
# include	"DnRnamespace.hpp"

namespace	DnRnamespace {
	void	validateValue(const int &intREF);
	class	InvalidMoneyException: public std::exception
	{
		private:
		protected:
		public:
			const char	*what(void) const throw();
	};
}



#endif