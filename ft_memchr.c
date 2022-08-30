/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:37:19 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/25 23:57:07 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return (p);
		++p;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	fprintf(stderr, "av[1] --------------> %p\n", av[1]);
	fprintf(stderr, "ft_memchr with 'x' -> %p\n", ft_memchr(av[1], 'x', 1));
	return (0);
}
*/
