/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:52:11 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/09 19:12:22 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = c;
	return (s);
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
