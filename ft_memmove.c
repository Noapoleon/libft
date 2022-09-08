/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 01:23:58 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/08 01:23:47 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*og_dest;

	if ((dest == src) || (n == 0))
		return (dest);
	og_dest = dest;
	if (dest < src)
		while (n--)
			*((unsigned char *)dest++) = *((unsigned char *)src++);
	else
		while (n--)
			*((unsigned char *)(dest + n)) = *((unsigned char *)(src + n));
	return (og_dest);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;

	fprintf(stderr, "av ft_memmove -> %s\n", av[1]);
	ft_memmove(av[1], av[1] + 5, 7);
	fprintf(stderr, "ap ft_memmove -> %s\n", av[1]);
	//hellobonjour
	return (0);
}
*/
