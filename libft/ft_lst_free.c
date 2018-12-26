/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:09:23 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/10 14:10:07 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_free(t_list *lst)
{
	t_list *temp;

	if (!lst)
		return ;
	while (lst)
	{
		ft_bzero(lst->content, lst->content_size);
		free(lst->content);
		lst->content_size = 0;
		temp = lst;
		lst = lst->next;
		free(temp);
	}
	temp = NULL;
}
