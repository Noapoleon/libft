/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:24:58 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/30 19:08:24 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	int		i;

	if (s == NULL)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		tmp[i] = s[i];
		++i;
	}
	tmp[i] = '\0';
	return (tmp);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	char *s1;

	s1 = ft_strdup(av[1]);
	fprintf(stderr, "av[1] ---> %s\n", av[1]);
	fprintf(stderr, "at addr -> %p\n", av[1]);
	fprintf(stderr, "s1 ------> %s\n", s1);
	fprintf(stderr, "at addr -> %p\n", s1);
	return (0);
}
*/
