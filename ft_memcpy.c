/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 00:38:03 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/26 00:43:00 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	while (n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (dest);
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
