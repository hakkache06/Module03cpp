# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhakkach <yhakkach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 01:26:26 by yhakkach          #+#    #+#              #
#    Updated: 2022/05/31 15:45:48 by yhakkach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= main.cpp  ClapTrap.cpp ScavTrap.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= clang++
RM				= rm -f
CFLAGS			=  -Wall -Wextra -Werror -std=c++98

NAME			= exec

all:			$(NAME)

$(NAME):		$(OBJS)
				clang++ ${CFLAGS} -o ${NAME} ${OBJS}
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re:				fclean $(NAME)
.PHONY:			all clean fclean re