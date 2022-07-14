/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalmeida <nalmeida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:14:12 by nalmeida          #+#    #+#             */
/*   Updated: 2022/07/12 19:01:39 by nalmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}

//Checa se o (i) e um numero.