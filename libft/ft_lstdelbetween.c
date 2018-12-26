/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelbetween.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:53:32 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/10 17:18:06 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelbetween(t_list *alst, t_list *del)
{
	t_list **temp;

	temp = NULL;
	while (alst->next != NULL)
	{
		if (alst->next == del)
		{
			*temp = alst;
			alst = alst->next;
			(*temp)->next = alst->next;
			free(alst->content);
			free(alst);
			alst = NULL;
			return ;
		}
		alst = alst->next;
	}
}
