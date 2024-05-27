/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:26:31 by jyao              #+#    #+#             */
/*   Updated: 2024/05/27 17:30:32 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Graph.hpp"

Graph::Graph(void)
{
}

Graph::~Graph(void)
{
}

Graph::Graph(const Graph &graphREF)
{
	this->operator=(graphREF);
}

Graph	&Graph::operator=(const Graph &graphREF)
{
	if (this != &graphREF)
	{
		this->_sizeCanvas = graphREF._sizeCanvas;
		this->_listPoints = graphREF._listPoints;
	}
	return (*this);
}

void	Graph::plotGraphASCII(void)
{
	
}

void	Graph::plotGraphPNG(void)
{
	
}
