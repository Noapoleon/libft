/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:54:33 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/24 19:52:06 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
		++i;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;

	fprintf(stderr, "addr av[1] -> %p\n", av[1]);
	fprintf(stderr, "ft_strchr --> %p\n", ft_strchr(av[1], 'x'));
	fprintf(stderr, "ft_strchr --> %s\n", ft_strchr(av[1], 'x'));
	return (0);
}
*/
