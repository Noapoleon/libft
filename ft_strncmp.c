/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:37:02 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/08 01:30:31 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n--)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == 0)
			return (0);
		++i;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void)ac;
	av[1][0] = 0;
	av[2][0] = 128;
	fprintf(stderr, "test 0:\n");
	fprintf(stderr, "strncmp ----> %d\n", strncmp(av[1], av[2], 0));
	fprintf(stderr, "ft_strncmp -> %d\n", ft_strncmp(av[1], av[2], 0));
	fprintf(stderr, "test 1:\n");
	fprintf(stderr, "strncmp ----> %d\n", strncmp(av[1], av[2], 1));
	fprintf(stderr, "ft_strncmp -> %d\n", ft_strncmp(av[1], av[2], 1));
	fprintf(stderr, "test 5:\n");
	fprintf(stderr, "strncmp ----> %d\n", strncmp(av[1], av[2], 5));
	fprintf(stderr, "ft_strncmp -> %d\n", ft_strncmp(av[1], av[2], 5));
	 return (0);
}
*/
