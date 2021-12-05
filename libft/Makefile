# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 15:12:31 by dpunishe          #+#    #+#              #
#    Updated: 2021/12/01 15:12:32 by dpunishe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= $(wildcard $(DIR_SRCS)*.c)


CC=clang
HEADER=libft.h
INCLUDES= libft.h
NAME=libft.a
FLAGS = -Wall -Wextra -Werror
OBJS=$(SRC:.c=.o)
OBJS_BONUS=$(BNS:.c=.o)


all:	$(NAME)

$(NAME):
	@clang $(FLAGS) -I $(HEADER) -c $(SRC)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@rm -f $(OBJS_BONUS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all