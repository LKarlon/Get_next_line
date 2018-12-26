/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 12:07:31 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/10 12:09:12 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_words(char const **s, char c)
{
	int			count;
	char		*word;
	const char	*begin;
	char		*bword;

	count = 0;
	while (**s == c)
		(*s)++;
	begin = (*s);
	while (**s != '\0' && **s != c)
	{
		count++;
		(*s)++;
	}
	*s = begin;
	if (!(word = (char*)malloc(sizeof(char) * (count + 1))))
		return (0);
	bword = word;
	while (count-- > 0)
	{
		*word++ = **s;
		(*s)++;
	}
	*word = '\0';
	return (bword);
}
