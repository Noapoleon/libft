/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:53:21 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/24 20:30:42 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i))
		++i;
	while (i > 0)
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
		--i;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	 fprintf(stderr, "addr av[1] -> %p\n", av[1]);
	 fprintf(stderr, "ft_strrchr -> %s\n", ft_strrchr(av[1], 'x'));
	 fprintf(stderr, "ft_strrchr -> %p\n", ft_strrchr(av[1], 'x'));
	 return (0);
}
*/
