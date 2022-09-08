/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 00:45:26 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/07 05:02:28 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;

	if (nee[0] == '\0')
		return ((char *)hay);
	i = 0;
	while (*hay && (i < len))
	{
		j = 0;
		while ((hay[j] == nee[j]) && hay[j] && ((i + j) < len))
		{
			if (nee[j + 1] == 0)
				return ((char *)hay);
			++j;
		}
		++hay;
		++i;
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
