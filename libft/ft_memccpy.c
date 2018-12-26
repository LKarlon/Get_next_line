/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 23:09:45 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/13 14:50:07 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (n--)
	{
		if (((unsigned char*)src)[i] == (unsigned char)c)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			return (dst + i + 1);
		}
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (NULL);
}
