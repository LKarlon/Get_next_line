/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:14:39 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/04 18:51:55 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *chr1;
	unsigned char *chr2;

	chr1 = (unsigned char*)s1;
	chr2 = (unsigned char*)s2;
	while (n--)
	{
		if (*chr1 == *chr2)
		{
			chr1++;
			chr2++;
		}
		else
			return (*chr1 - *chr2);
	}
	return (0);
}
