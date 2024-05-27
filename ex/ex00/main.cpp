/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:48:11 by jyao              #+#    #+#             */
/*   Updated: 2024/05/27 14:42:10 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"Bank.hpp"

int	main(void)
{
	{
		std::cout	<< "<--------------------MANDATORY TESTS-------------------->"
					<< "\n"
					<< "\n"
					<< std::endl;	
	}
	{
		std::cout	<< "<--------------------TEST RECIEVE 5%-------------------->"
			<< "\n"
			<< std::endl;
		try {
			Bank				bank42;
			std::vector< int >	idList;

			idList.push_back(bank42.createClient());
			std::cout	<< bank42
						<< "\n"
						<< std::endl;
			bank42.addMoney(idList.front(), 4200);
			std::cout	<< bank42
						<< "\n"
						<< std::endl;
		}
		catch (std::exception &e) {
			std::cerr	<< e.what()
						<< std::endl;
		}
	}
	{
		std::cout	<< "<--------------------BONUS TESTS-------------------->"
					<< "\n"
					<< "\n"
					<< std::endl;	
	}
	return (0);
}