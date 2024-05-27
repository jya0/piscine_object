/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:08:54 by jyao              #+#    #+#             */
/*   Updated: 2024/05/27 17:30:14 by jyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GRAPH_HPP
# define		GRAPH_HPP

# include	<list>
# include	"Vector2.hpp"

class Graph
{
	private:
		Vector2					_sizeCanvas;
		std::list< Vector2 >	_listPoints;
	protected:
	public:
		Graph(void);
		~Graph(void);
		Graph(const Graph &graphREF);
		Graph	&operator=(const Graph &graphREF);

		void	plotGraphASCII(void);
		void	plotGraphPNG(void);
};

#endif