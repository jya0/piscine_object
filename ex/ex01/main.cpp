/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:49:46 by jyao              #+#    #+#             */
/*   Updated: 2024/05/27 16:56:48 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>

static void	pauseFun(const std::string &message)
{
	std::cout	<< std::endl
				<< "Press enter to "
				<< message
				<< std::endl;
	std::cin.get();
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		{
			std::cout	<< "<--------------------MANDATORY TESTS-------------------->"
						<< std::endl
						<< std::endl;	
		}
		pauseFun("start the mandatory test case scenario");
	}
	if (argc == 2)
	{
		{
			std::cout	<< "<--------------------BONUS TESTS-------------------->"
						<< std::endl
						<< std::endl;
		}
		pauseFun("start the bonus test case scenario");
		(void)argv;
	}
	else
	{
		std::cerr	<< "Usage: "
					<< std::endl
					<< ">> ./graphing"
					<< std::endl
					<< "this will plot a graph in ASCII format"
					<< std::endl
					<< ">> ./graphing [file with vector2 points in the relevant format]"
					<< std::endl
					<< "this will generate a graph in PNG format"
					<< std::endl;
	}
	return (0);
}
