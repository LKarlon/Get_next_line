/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkarlon- <lkarlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 16:05:45 by lkarlon-          #+#    #+#             */
/*   Updated: 2018/12/26 17:28:21 by lkarlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int			node_del(t_remain **dat)
{
	t_remain *save;

	save = *dat;
	if (*dat)
	{
		free((*dat)->content);
		(*dat)->next = NULL;
		*dat = save->next;
		ft_memdel((void**)&save);
	}
	return (0);
}

char		*ft_join(char *s1, char *s2, size_t main, ssize_t last)
{
	char	*new_str;
	size_t	i;
	char	*save;

	save = s2;
	i = 0;
	if (!(new_str = ft_memalloc(main + last + 1)))
		return (NULL);
	while (i < main)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < main + last)
	{
		new_str[i] = *s2;
		i++;
		s2++;
	}
	ft_memdel((void**)&s1);
	ft_memdel((void**)&save);
	return (new_str);
}

char		*sort(char *str, t_remain *dat, size_t count)
{
	char	*buf;
	size_t	i;

	i = 0;
	while (count)
	{
		if (str[i] == '\n')
		{
			buf = ft_strnew(i);
			ft_memcpy(buf, str, i);
			dat->ret_size = i++;
			ft_memmove(&dat->content[0], &str[i], --count);
			dat->content_size = count;
			dat->stop = 1;
			return (buf);
		}
		count--;
		i++;
	}
	buf = ft_strnew(i);
	dat->stop = 0;
	dat->ret_size = i;
	dat->content_size = count;
	ft_memmove(buf, str, i);
	return (buf);
}

t_remain	*fdcheck(t_remain *dat, int fd)
{
	t_remain	*save;
	t_remain	*tmp;

	tmp = NULL;
	save = dat;
	while (dat && dat->fd != fd)
	{
		tmp = dat;
		dat = dat->next;
	}
	if (!dat)
	{
		dat = (t_remain*)malloc(sizeof(t_remain));
		dat->content = ft_memalloc(BUFF_SIZE);
		dat->content_size = 0;
		dat->next = save;
	}
	if (tmp && (dat->fd == fd))
	{
		tmp->next = dat->next;
		dat->next = save;
	}
	dat->ret_size = 0;
	dat->fd = fd;
	return ((dat->stop = 0) ? dat : dat);
}

int			get_next_line(const int fd, char **line)
{
	ssize_t			ret;
	size_t			m_count;
	char			*buffer;
	static t_remain	*dat = NULL;

	m_count = 0;
	if (fd < 0 || !line || !(buffer = ft_memalloc(BUFF_SIZE)) ||
			read(fd, 0, 0) == -1 || !(dat = fdcheck(dat, fd)))
		return (-1);
	*line = ft_memalloc(1);
	if (dat->content_size)
	{
		*line = sort(dat->content, dat, dat->content_size);
		m_count = dat->ret_size;
		if (dat->stop)
			return (1);
	}
	while (!(dat->stop) && (ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		*line = ft_join(*line, sort(buffer, dat, ret), m_count, dat->ret_size);
		m_count += dat->ret_size;
	}
	ft_memdel((void**)&buffer);
	m_count = (!(**line) && !ret ? node_del(&dat) : 1);
	return (ret < 0 ? -1 : m_count);
}
