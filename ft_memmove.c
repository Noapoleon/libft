/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 01:23:58 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/25 18:43:07 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;

	to = dest;
	from = (unsigned char *)src;
	if ((to == from) || (n == 0))
		return (to);
	if (to < from)
		while (n--)
			*to++ = *from++;
	else
	{
		while (n - 1 != 0)
		{
			to[n - 1] = from[n - 1];
			--n;
		}
		to[n - 1] = from[n - 1];
	}
	return (dest);
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
