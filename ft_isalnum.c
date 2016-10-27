/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 01:32:55 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/27 21:56:53 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || ft_isalpha(c))
		return (1);
	return (0);
}
