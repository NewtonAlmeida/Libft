# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nalmeida <nalmeida@student.42adel.org.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 15:49:43 by nalmeida          #+#    #+#              #
#    Updated: 2022/07/08 15:49:43 by nalmeida         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library	= libft

files	= ft_isalpha \
	ft_isdigit \

Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN 	= $(Library).a

CFILES 	= $(files:%=%.c)

OFILES 	= $(files:%= %.o)

NAME 	=	$(OUTN)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) 
	ar -rc $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re