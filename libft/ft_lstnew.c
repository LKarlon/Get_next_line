/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 13:44:19 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/05 15:19:16 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;
	void	*new_content;
	size_t	copy_size;

	copy_size = content_size;
	if (!content)
	{
		new_content = NULL;
		copy_size = 0;
	}
	else
	{
		if (!(new_content = (void*)malloc(sizeof(void) * copy_size)))
			return (NULL);
	}
	ft_memcpy(new_content, content, copy_size);
	if (!(new_list = (t_list*)malloc(sizeof(t_list))))
	{
		ft_memdel(&new_content);
		return (NULL);
	}
	new_list->content = new_content;
	new_list->content_size = copy_size;
	new_list->next = NULL;
	return (new_list);
}
