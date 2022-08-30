/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:58:37 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/30 18:09:34 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	ft_putstr_fd("hella\n", 1);
	ft_putstr_fd("hellb\n", 2);
	return (0);
}
*/