/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 23:00:04 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/09 15:38:20 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*save;
	size_t	i;

	save = (char*)haystack;
	i = 0;
	if (!(*needle))
		return (save);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			save = (char*)haystack;
			while (haystack[i] == needle[i])
			{
				i++;
				if (!(needle[i]))
					return (save);
			}
			i = 0;
		}
		haystack++;
	}
	return (NULL);
}
