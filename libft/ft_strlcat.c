/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:52:20 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/01 10:47:00 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;
	size_t	cpsize;

	i = 0;
	cpsize = size;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	while (*dst && size)
	{
		dst++;
		--size;
	}
	if (!size)
		return (cpsize + srclen);
	while (src[i] && --size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen + dstlen);
}
