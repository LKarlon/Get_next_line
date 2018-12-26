/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:53:11 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/01 11:38:13 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*save;
	size_t	i;

	save = (char*)haystack;
	i = 0;
	if (!(*needle))
		return (save);
	while (*haystack && len)
	{
		if (*haystack == *needle)
		{
			save = (char*)haystack;
			while ((haystack[i] == needle[i]) && len)
			{
				len--;
				if (!(needle[++i]))
					return (save);
			}
			len += i;
			i = 0;
		}
		len--;
		haystack++;
	}
	return (NULL);
}
