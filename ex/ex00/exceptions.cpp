/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:27:08 by jyao              #+#    #+#             */
/*   Updated: 2024/05/21 19:34:14 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"exceptions.hpp"
#include	<string>

# define	NEGATIVE_VALUE			-1
# define	NEGVE_VALUE_EXCEPTION	"Exception: Negative Value (could be potential overflow)\n"
# define	INVLD_ID_EXCEPTION		"Exception: Invalid ID\n"
# define	DUP_ID_EXCEPTION		"Exception: Duplicate ID\n"

void	DnRnamespace::isNegativeValue(const int &intREF)
{
	if (intREF <= NEGATIVE_VALUE)
		throw(negativeValueException());
}

const char	*DnRnamespace::negativeValueException::what(void) const throw()
{
	return (NEGVE_VALUE_EXCEPTION);
}

const char	*DnRnamespace::InvalidIdException::what(void) const throw()
{
	return (INVLD_ID_EXCEPTION);
}

const char	*DnRnamespace::DuplicateIdException::what(void) const throw()
{
	return (DUP_ID_EXCEPTION);
}

