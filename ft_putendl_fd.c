/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:58:37 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/30 18:20:39 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
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