/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:13:53 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/26 00:43:46 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ret;

	ret = ft_strlen(dest) + ft_strlen(src) + 1;
	while (*dest && (size > 1))
	{
		++dest;
		--size;
	}
	while (size > 1)
	{
		*dest++ = *src++;
		--size;
	}
	*dest = '\0';
	return (ret);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	char s1[100];

//	s1[0] = 'h';
//	s1[1] = 'e';
//	s1[2] = 'l';
//	s1[3] = 'l';
//	s1[4] = 'o';

	ft_strlcat(s1, av[1], 9);
	fprintf(stderr, "ft_strlcat -> %s$\n", s1);
	return (0);
}
*/
