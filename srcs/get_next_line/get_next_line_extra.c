/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_extra.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@stud.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:14:50 by nlegrand          #+#    #+#             */
/*   Updated: 2023/11/23 14:33:12 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Doesn't accomplish error detection at all like I wanted to do first
// Instead I just made a neat little wrapper to use get_next_line in while
// loops
int	gnl_w(int fd, char **line)
{
	*line = get_next_line(fd);
	if (*line == NULL)
		return (0);
	return (1);
}

t_fds	**fds_save(t_fds **fds)
{
	static t_fds	**save;

	if (save == NULL)
		save = fds;
	return (save);
}

void	destroy_gnl_fds(void)
{
	t_fds	**fds;
	t_fds	*cur;

	fds = fds_save(NULL);
	if (fds != NULL)
	{
		cur = *fds;
		while (cur)
		{
			*fds = cur->next;
			free(cur);
			cur = *fds;
		}
		*fds = NULL;
	}
}
