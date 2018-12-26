/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:37:47 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/09 15:37:49 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	char	*pn;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (0);
	if (!(new_str = (char*)malloc(ft_strlen(s) + 1)))
		return (0);
	pn = new_str;
	while (*s)
		*new_str++ = (f(i++, *s++));
	*new_str = '\0';
	return (pn);
}
