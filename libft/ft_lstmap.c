/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 12:59:43 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/10 14:09:21 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *temp;
	t_list *new_start;

	if (!lst || !f)
		return (NULL);
	temp = NULL;
	if (!(new_list = f(lst)))
		return (NULL);
	new_start = new_list;
	lst = lst->next;
	while (lst)
	{
		if (!(temp = f(lst)))
		{
			ft_lst_free(new_start);
			return (NULL);
		}
		new_list->next = temp;
		lst = lst->next;
		new_list = temp;
	}
	new_list->next = NULL;
	return (new_start);
}
