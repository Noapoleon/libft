/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:18:11 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/26 00:44:20 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;

	len_src = 0;
	while (src[len_src])
		++len_src;
	while (*src && (size-- > 1))
		*dest++ = *src++;
	*dest = '\0';
	return (len_src);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	char s1[100];

	ft_strlcpy(s1, av[1], 4);
	fprintf(stderr, "ft_strlcpy -> %s\n", s1);
	return (0);
}
*/
