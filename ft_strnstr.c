/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 00:45:26 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/27 02:05:37 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t i;

	if ((*nee == '\0') || (len == 0))
		return ((char *)hay);
	while (*hay)
	{
		i = 0;
		while ((hay[i] == nee[i]) && hay[i]  && (i < len))
		{
			if (nee[i] == 0)
				break ;
			++i;
		}
		if ((i == len) && (hay[i - 1] == nee[i - 1]))
			return ((char *)hay);
		if (nee[i] == '\0')
			return ((char *)hay);
		++hay;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	fprintf(stderr, "av[1] --------> %s\n", av[1]);
	fprintf(stderr, "av[1] addr ---> %p\n", av[1]);
	fprintf(stderr, "ft_strnstr 0 -> %p\n", ft_strnstr(av[1], av[2], 0));
	fprintf(stderr, "ft_strnstr 0 -> %s\n", ft_strnstr(av[1], av[2], 0));
	fprintf(stderr, "ft_strnstr 1 -> %p\n", ft_strnstr(av[1], av[2], 1));
	fprintf(stderr, "ft_strnstr 1 -> %s\n", ft_strnstr(av[1], av[2], 1));
	fprintf(stderr, "ft_strnstr 4 -> %p\n", ft_strnstr(av[1], av[2], 4));
	fprintf(stderr, "ft_strnstr 4 -> %s\n", ft_strnstr(av[1], av[2], 4));
	fprintf(stderr, "ft_strnstr 5 -> %p\n", ft_strnstr(av[1], av[2], 5));
	fprintf(stderr, "ft_strnstr 5 -> %s\n", ft_strnstr(av[1], av[2], 5));
	fprintf(stderr, "ft_strnstr 6 -> %p\n", ft_strnstr(av[1], av[2], 6));
	fprintf(stderr, "ft_strnstr 6 -> %s\n", ft_strnstr(av[1], av[2], 6));
	fprintf(stderr, "ft_strnstr 7 -> %p\n", ft_strnstr(av[1], av[2], 7));
	fprintf(stderr, "ft_strnstr 7 -> %s\n", ft_strnstr(av[1], av[2], 7));
	return (0);
}
//./a.out bonjourhellosalutlalala hello
*/
