/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:20:27 by jyao              #+#    #+#             */
/*   Updated: 2024/05/21 19:33:30 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		EXCEPTIONS_HPP
# define	EXCEPTIONS_HPP

# include	<exception>
# include	"DnRnamespace.hpp"

namespace	DnRnamespace {
	void	isNegativeValue(const int &intREF);
	class	negativeValueException: public std::exception
	{
		private:
		protected:
		public:
			const char	*what(void) const throw();
	};
	class	InvalidIdException: public std::exception
	{
		private:
		protected:
		public:
			const char	*what(void) const throw();
	};
	class	DuplicateIdException: public std::exception
	{
		private:
		protected:
		public:
			const char	*what(void) const throw();
	};
}

#endif