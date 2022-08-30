/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:06:54 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/30 19:15:27 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;

	i = 0;
	while (s[i])
	{
		f(i, (s + i));
		++i;
	}
}

/*
#include <stdio.h>
void	cap_e(unsigned int x, char *s)
{
	(void)x;

	if (*s == 'e')
		*s = 'E';
}
void	space_to_underscore(unsigned int x, char *s)
{
	(void)x;

	if (*s == ' ')
		*s = '_';
}
int	main(int ac, char **av)
{
	(void)ac;

	ft_striteri(av[1], &cap_e);
	fprintf(stderr, "av[1] -> %s\n", av[1]);
	ft_striteri(av[1], &space_to_underscore);
	fprintf(stderr, "av[1] -> %s\n", av[1]);
	return (0);
}
*/
