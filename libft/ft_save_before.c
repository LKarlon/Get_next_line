/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_before.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:32:31 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/14 12:57:10 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_save_before(const char *src, char c)
{
	size_t	i;
	char	*result;

	i = 0;
	while (src[i])
	{
		if (src[i] == c)
		{
			if (!i || !(result = ft_strnew(i)))
				return (NULL);
			result = ft_memcpy(result, src, i);
			return (result);
		}
		i++;
	}
	return (NULL);
}
