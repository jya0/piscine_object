/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:48:11 by jyao              #+#    #+#             */
/*   Updated: 2024/05/27 16:16:28 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"Bank.hpp"

static void	pauseFun(const std::string &message)
{
	std::cout	<< std::endl
				<< "Press enter to "
				<< message
				<< std::endl;
	std::cin.get();
}

int	main(void)
{
	{
		std::cout	<< "<--------------------MANDATORY TESTS-------------------->"
					<< std::endl
					<< std::endl;	
	}
	{
		std::cout	<< "<--------------------TEST RECIEVE 5%-------------------->"
					<< std::endl;
		try {
			Bank				bank42;
			std::vector< int >	idList;

			idList.push_back(bank42.createClient());
			std::cout	<< bank42
						<< std::endl;
			bank42.addMoneyToClient(idList.front(), 4200);
			std::cout	<< bank42
						<< std::endl;
		}
		catch (std::exception &e) {
			std::cerr	<< e.what()
						<< std::endl;
		}
		pauseFun("continue to the next test");
	}
	{
		std::cout	<< "<--------------------TEST NEVER DUPLICATE ID-------------------->"
					<< std::endl;
		try {
			Bank				bank42;
			std::vector< int >	idList;

			for (int i = 0; i < 100; ++i)
			{
				idList.push_back(bank42.createClient());
			}
			pauseFun("change a client's ID to itself");
			bank42.modClient(idList.front(), &idList.front(), NULL);
			pauseFun("add a duplicate ID to trigger exception");
			bank42.modClient(idList.front(), &idList.back(), NULL);
		}
		catch (std::exception &e) {
			std::cerr	<< e.what()
						<< std::endl;
		}
		pauseFun("continue to the next test");
	}
	{
		std::cout	<< "<--------------------TEST CAN'T EDIT ATTRIBUTE FROM OUTSIDE-------------------->"
					<< std::endl;
		try {
			std::cout	<< "Let's take a look at our class structures again"
						<< std::endl;
		}
		catch (std::exception &e) {
			std::cerr	<< e.what()
						<< std::endl;
		}
		pauseFun("continue to the next test");
	}
	{
		std::cout	<< "<--------------------TEST CREATE DELETE MODIFY CUSTOMER ACCOUNTS-------------------->"
					<< std::endl;
		try {
			Bank				bank42;
			std::vector< int >	idList;
			int					newID;
			int					newValue;

			pauseFun("create some clients");
			for (int i = 0; i < 4; ++i)
			{
				idList.push_back(bank42.createClient());
			}
			pauseFun("delete some clients");
			for (std::vector< int >::const_iterator itc = idList.cbegin() + 1; itc != idList.cend(); ++itc)
			{
				bank42.deleteClient(*itc);
			}
			pauseFun("modify a client");
			std::cout	<< bank42
						<< std::endl;
			newID = 4242;
			newValue = 4200000;
			bank42.modClient(idList.front(), &newID, &newValue);
			std::cout	<< bank42
						<< std::endl;
		}
		catch (std::exception &e) {
			std::cerr	<< e.what()
						<< std::endl;
		}
		pauseFun("continue to the next test");
	}
	{
		std::cout	<< "<--------------------TEST LOAN TO CLIENT-------------------->"
					<< std::endl;
		try {
			Bank				bank42;
			std::vector< int >	idList;

			idList.push_back(bank42.createClient());
			pauseFun("give bank some money");
			bank42.addMoneyToBank(424242);
			pauseFun("loan an enough amount of money to client");
			bank42.loanToClient(idList.front(), 4242);
			pauseFun("loan an over amount of money to client");
			bank42.loanToClient(idList.front(), 42424242);
		}
		catch (std::exception &e) {
			std::cerr	<< e.what()
						<< std::endl;
		}
		pauseFun("continue to the next test");
	}
	{
		std::cout	<< "<--------------------TEST CAN'T ADD MONEY TO CLIENT WITHOUT GOING THROUGH BANK-------------------->"
					<< std::endl;
		try {
			std::cout	<< "Let's take a look at our class structures again"
						<< std::endl;
		}
		catch (std::exception &e) {
			std::cerr	<< e.what()
						<< std::endl;
		}
		pauseFun("continue to the next test");
	}
	{
		std::cout	<< "<--------------------BONUS TESTS-------------------->"
					<< std::endl
					<< std::endl;
	}
	{
		std::cout	<< "<--------------------TEST ALL BONUS CONDITIONS-------------------->"
					<< std::endl;
		try {
			std::cout	<< "Let's take a look at our documents to go through the criteria"
						<< std::endl;
		}
		catch (std::exception &e) {
			std::cerr	<< e.what()
						<< std::endl;
		}
		pauseFun("continue to the next test");
	}
	{
		std::cout	<< "<--------------------END OF ALL TESTS-------------------->"
					<< std::endl
					<< std::endl;
	}
	return (0);
}
