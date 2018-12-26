/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:19:11 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/01 12:04:33 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	if ((*(unsigned char*)s1 && !*(unsigned char*)s2) ||
	(!*(unsigned char*)s1 && *(unsigned char*)s2))
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
	while (*(unsigned char*)s1 && *(unsigned char*)s2 &&
	*(unsigned char*)s1 == *(unsigned char*)s2)
	{
		s1++;
		s2++;
	}
	return ((*(unsigned char*)s1) - (*(unsigned char*)s2));
}
