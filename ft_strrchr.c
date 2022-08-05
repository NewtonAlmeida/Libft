/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalmeida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:02:03 by nalmeida          #+#    #+#             */
/*   Updated: 2022/08/05 15:58:45 by nalmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	find_c;
	int		s_len;
	char	*found_c;

	find_c = c;
	found_c = NULL;
	s_len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + s_len);
	while (*s)
	{
		if (*s == find_c)
			found_c = (char *) s;
		s++;
	}
	return ((char *)found_c);
}
