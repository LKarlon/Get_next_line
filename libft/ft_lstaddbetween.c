/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddbetween.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:27:32 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/10 14:58:12 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddbetween(t_list *alst, t_list *new)
{
	t_list *temp;

	if (!alst || !new)
		return ;
	temp = alst->next;
	alst->next = new;
	new->next = temp;
}
