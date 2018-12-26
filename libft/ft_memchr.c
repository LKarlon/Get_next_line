/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:58:41 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/11/30 15:57:22 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ch;

	ch = (unsigned char*)s;
	while (n--)
	{
		if (*ch == (unsigned char)c)
			return (ch);
		else
			ch++;
	}
	return (NULL);
}
