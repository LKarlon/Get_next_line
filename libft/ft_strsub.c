/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:40:00 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/09 19:14:02 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new_str;

	if (!s)
		return (NULL);
	if (!(new_str = ft_strnew(len)))
		return (0);
	s = &s[start];
	ft_memcpy(new_str, s, len);
	new_str[len] = '\0';
	return (new_str);
}
