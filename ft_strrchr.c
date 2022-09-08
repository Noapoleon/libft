/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:53:21 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/07 04:34:35 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		--i;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void)ac;
	 fprintf(stderr, "addr av[1] -> %p\n", av[1]);
	 fprintf(stderr, "strrchr ----> %s\n", strrchr(av[1], av[2][0]));
	 fprintf(stderr, "strrchr ----> %p\n", strrchr(av[1], av[2][0]));
	 fprintf(stderr, "ft_strrchr -> %s\n", ft_strrchr(av[1], av[2][0]));
	 fprintf(stderr, "ft_strrchr -> %p\n", ft_strrchr(av[1], av[2][0]));
	 return (0);
}
*/
