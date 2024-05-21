/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:27:08 by jyao              #+#    #+#             */
/*   Updated: 2024/05/21 15:53:03 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"exceptions.hpp"
#include	<string>

# define	INVALID_VALUE	0

void	DnRnamespace::validateValue(const int &intREF)
{
	if (intREF <= INVALID_VALUE)
		throw(InvalidMoneyException());
}

const char	*DnRnamespace::InvalidMoneyException::what(void) const throw()
{
	return ("The value is invalid because it is either less or equal to 0");
}
