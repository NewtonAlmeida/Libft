/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalmeida <nalmeida@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:40:46 by nalmeida          #+#    #+#             */
/*   Updated: 2022/07/21 11:40:46 by nalmeida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int i)
{
    if (i >= 'a' && i <= 'z')
        return(i - 32);
    return(i);
}