/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 13:59:27 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/04 16:43:51 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*final;
	long	save;

	save = n;
	i = 1;
	while (save /= 10)
		i++;
	save = n;
	if (save < 0)
	{
		i++;
		save *= -1;
	}
	if (!(final = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	final[i] = '\0';
	while (i--)
	{
		final[i] = save % 10 + '0';
		save /= 10;
	}
	if (n < 0)
		final[0] = '-';
	return (final);
}
