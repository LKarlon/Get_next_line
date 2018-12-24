/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <lkarlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 18:05:07 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/24 19:58:08 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# define BUFF_SIZE 100

typedef struct		s_list2
{
	char			*content;
	char			stop;
	size_t			content_size;
	size_t			ret_size;
	ssize_t			fd;
	struct s_list2	*next;
}					t_remain;

int					get_next_line(const int fd, char **line);

#endif
