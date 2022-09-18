/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:58:37 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/15 22:30:40 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	ft_putendl_fd("hella", 1);
	ft_putendl_fd("hellb", 2);
	return (0);
}
*/
