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
	   ft_bzero. \
	   ft_isalnum \
	   ft_isascii \
	   ft_isprint \
	   ft_memcpy \
	   ft_memmove \
	   ft_menset \
	   ft_strlcat \
	   ft_strlen \
	   ft_toupper \
	   ft_tolower \
	   ft_strchr \
	   ft_strncmp \
	   ft_memcmp \
	   ft_strnstr \
	   ft_atoi \
	   ft_substr \
	   ft_strjoin \
	   ft_strtrim \
	   ft_split \
	   ft_itoa \
	   ft_strmapi \
	   ft_striteri \
	   ft_putchar_fd \
	   ft_putstr_fd \
	   ft_putendl_fd \
	   ft_putnbr_fd \


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
