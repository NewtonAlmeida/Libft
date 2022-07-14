# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nalmeida <nalmeida@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 19:03:22 by nalmeida          #+#    #+#              #
#    Updated: 2022/07/06 19:52:27 by nalmeida         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

files = ft_isalpha \
	   ft_isdigit \

Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror 

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

NAME = libft.a

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) 
	ar rcs $(NAME) $(OFILES)

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
