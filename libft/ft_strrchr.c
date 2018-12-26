/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 22:04:50 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/11/30 15:58:09 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *save;

	save = NULL;
	while (*s)
	{
		if (*s == (char)c)
			save = (char*)s;
		s++;
	}
	if (*s == (char)c)
		save = (char*)s;
	return ((save) ? (save) : (NULL));
}
