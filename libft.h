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
int	ft_toupper(int i)
char	*ft_strchr(const char *s, int i)
char	*ft_strrchr(const char *s, int c)
int	ft_strncmp(const char *s1, char *s2, size_t n)
int	ft_memcmp(const void *s1, const void *s2, size_t n)
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
int	ft_atoi(const char *str)

#endif
