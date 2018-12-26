/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:21:05 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/09 19:59:40 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t len;
	size_t i;

	if (!s)
		return (0);
	len = ft_strlen(s);
	i = len;
	if (!len)
		return ((char*)s);
	while (len &&
			(s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'))
		len--;
	if (!len)
		return (ft_strsub(s, i, len));
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		i++;
		len--;
	}
	return (ft_strsub(s, i, len));
}
