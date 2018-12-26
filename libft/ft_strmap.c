/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 13:06:18 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/03 11:28:07 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	char	*pn;

	if (!s || !f)
		return (0);
	if (!(new_str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	pn = new_str;
	while (*s)
		*new_str++ = f(*s++);
	*new_str = '\0';
	return (pn);
}
