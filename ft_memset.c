/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:52:11 by nlegrand          #+#    #+#             */
/*   Updated: 2022/11/06 16:04:36 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			dup;
	size_t			i;
	void			*og_s;

	og_s = s;
	i = 0;
	while ((n > sizeof(size_t)) && (i++ < sizeof(size_t)))
	{
		dup <<= 8;
		dup |= (unsigned char)c;
	}
	while (n > sizeof(size_t))
	{
		*(size_t *)s = dup;
		s += sizeof(size_t);
		n -= sizeof(size_t);
	}
	while (n--)
		*(unsigned char *)s++ = (unsigned char)c;
	return (og_s);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	fprintf(stderr, "before memset -> %s\n", av[1]);
	ft_memset(av[1], 'x', 3);
	fprintf(stderr, "before memset -> %s\n", av[1]);
	return (0);
}
*/
