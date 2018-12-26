/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:07:20 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/11/30 15:57:56 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (len && src[i])
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	if (!src[i] && len)
		ft_bzero(&dst[i], len);
	return (dst);
}
