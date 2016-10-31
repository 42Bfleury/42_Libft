/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 08:19:00 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/31 15:11:02 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*result;

	i = ft_intlen(n);
	if (!(result = ft_strnew(i--)))
		return (NULL);
	if (n <= 0)
		result[0] = (n == 0) ? '0' : '-';
	while (n)
	{
		result[i--] = (n < 0) ? '0' - (n % 10) : '0' + (n % 10);
		n /= 10;
	}
	return (result);
}
