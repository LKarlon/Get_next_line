/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 11:12:14 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/17 19:42:21 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*place;
	size_t	max;

	max = -1;
	if ((max == size) || !(place = (void*)malloc(sizeof(size_t) * size)))
		return (NULL);
	ft_bzero(place, size);
	return (place);
}
