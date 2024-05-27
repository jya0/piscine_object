# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/27 16:48:31 by jyao              #+#    #+#              #
#    Updated: 2024/05/27 16:49:17 by jyao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile ex01 -*-

NAME		:=	graphing

Headers		:=	Vector2.hpp	Graph.hpp

FILES		:=	main	Graph	Vector2

SRCS		=	$(addsuffix .cpp, $(FILES))

OBJSDIR		:=	./objsdir/

OBJS		=	$(addprefix $(OBJSDIR), $(addsuffix .o, $(FILES)))

CXX			:=	c++

CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98


all:	$(NAME)

$(NAME):	$(HEADERS)	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS):	$(OBJSDIR)

$(OBJSDIR):
	mkdir -p $@

$(OBJSDIR)%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

clean:
	rm -rf $(OBJSDIR)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re