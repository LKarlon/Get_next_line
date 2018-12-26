/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:52:31 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/11/23 19:29:22 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *cp;

	cp = (unsigned char*)b;
	while (len--)
	{
		*(unsigned char*)b = (unsigned char)c;
		b++;
	}
	return (cp);
}
