/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 12:05:08 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/10 12:43:25 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t count;
	size_t i;

	count = 0;
	i = 0;
	if (s[i] != c)
		count = 1;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}
