# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/21 13:50:17 by jyao              #+#    #+#              #
#    Updated: 2024/05/21 15:34:44 by jyao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*-Makefile Module00-*-

NAME		:=	divideNconquer

Headers		:=	Account.hpp	Bank.hpp	exceptions.hpp	DnRnamespace.h

FILES		:=	main	Account	Bank	exceptions

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