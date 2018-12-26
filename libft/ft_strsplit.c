/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:15:50 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/10 12:43:08 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**global;
	size_t	i;
	size_t	main_count;

	i = 0;
	if (!s || !(global = (char**)malloc(sizeof(char*) *
			((main_count = ft_count_words(s, c)) + 1))))
		return (NULL);
	if (!*s)
	{
		global[i] = 0;
		return (global);
	}
	while (i < main_count)
	{
		global[i] = ft_words(&s, c);
		i++;
	}
	global[i] = 0;
	return (global);
}
