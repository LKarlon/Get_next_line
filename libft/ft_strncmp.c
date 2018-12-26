/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:57:10 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/01 12:27:00 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	if ((*(unsigned char*)s1 && !*(unsigned char*)s2) ||
	(!*(unsigned char*)s1 && *(unsigned char*)s2))
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
	while (*(unsigned char*)s1 && *(unsigned char*)s2 && --n &&
	*(unsigned char*)s1 == *(unsigned char*)s2)
	{
		s1++;
		s2++;
	}
	return ((*(unsigned char*)s1) - (*(unsigned char*)s2));
}
