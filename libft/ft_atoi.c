/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:39:57 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/09 19:11:27 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	final;
	int			sign;

	while (!(final = 0) && (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\r' || *str == '\f'))
		str++;
	if ((sign = 1) && (*str == '-'))
	{
		sign = -1;
		final *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		final = final * 10 + (*str - '0');
		if (final < 0)
			return (sign < 0 ? 0 : -1);
		str++;
	}
	return (sign * final);
}
