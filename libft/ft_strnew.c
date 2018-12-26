/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 15:55:11 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/09 23:02:55 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*place;
	size_t	max;

	max = -1;
	if ((max == size) || !(place = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_bzero(place, size + 1);
	return (place);
}
