/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:54:33 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/07 04:30:36 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void)ac;

	fprintf(stderr, "addr av[1] -> %p\n", av[1]);
	fprintf(stderr, "strchr -----> %p\n", strchr(av[1], av[2][0]));
	fprintf(stderr, "strchr -----> %s\n", strchr(av[1], av[2][0]));
	fprintf(stderr, "ft_strchr --> %p\n", ft_strchr(av[1], av[2][0]));
	fprintf(stderr, "ft_strchr --> %s\n", ft_strchr(av[1], av[2][0]));
	return (0);
}
*/
