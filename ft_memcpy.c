/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 00:38:03 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/07 04:38:20 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	void	*og_dest;

	og_dest = dest;
	while (n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (og_dest);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	char s1[100];

	ft_memcpy(s1, av[1], 5);
	fprintf(stderr, "ft_memcpy -> %s\n", s1);
	return (0);
}
*/
