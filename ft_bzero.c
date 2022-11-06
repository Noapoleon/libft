/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:51:41 by nlegrand          #+#    #+#             */
/*   Updated: 2022/11/06 16:26:55 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n > sizeof(size_t))
	{
		*(size_t *)s = 0;
		s += sizeof(size_t);
		n -= sizeof(size_t);
	}
	while (n--)
		*(unsigned char *)s++ = '\0';
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	fprintf(stderr, "before memset -> %s\n", av[1]);
	ft_bzero(av[1]+5, 3);
	fprintf(stderr, "before memset -> %s\n", av[1]);
	return (0);
}
*/
