/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:13:53 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/15 20:50:12 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	og_size;
	size_t	dst_len;
	size_t	src_len;

	if ((dst == NULL) && (size == 0))
		return (0);
	og_size = size;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (*dst && size)
	{
		++dst;
		--size;
	}
	if (size == 0)
		return (og_size + src_len);
	while (*src && (size-- > 1))
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}

/*
#include <stdio.h>
#include <bsd/string.h>
int	main(int ac, char **av)
{
	(void)ac;
	char s1[100];

	s1[0] = 'h';
	s1[1] = 'e';
	s1[2] = 'l';
	s1[3] = 'l';
	s1[4] = 'o';

	char s2[100];

	s2[0] = 'h';
	s2[1] = 'e';
	s2[2] = 'l';
	s2[3] = 'l';
	s2[4] = 'o';

	size_t x;
	x = strlcat(s1, av[1], 3);
	fprintf(stderr, "strlcat ----> %s$\n", s1);
	fprintf(stderr, "ret = %ld\n", x);
	x = ft_strlcat(s2, av[1], 3);
	fprintf(stderr, "ft_strlcat -> %s$\n", s2);
	fprintf(stderr, "ret = %ld\n", x);
	return (0);
}
*/
