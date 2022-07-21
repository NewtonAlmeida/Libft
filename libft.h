/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalmeida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:49:02 by nalmeida          #+#    #+#             */
/*   Updated: 2022/07/12 18:57:54 by nalmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<stdlib.h>
# include<unistd.h>

int ft_isprint(int i);
int ft_isalnum(int i);
int ft_isalpha(int i);
int ft_isdigit(int i);
int ft_isascii(int i);
void    *ft_memset(void *b, int c, size_t len);
int ft_strlen(const char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n)
size_t	ft_strlcat(char *dst, const char *src, size_t size)
int ft_strlen(const char *str)
int ft_toupper(int i)
#endif
