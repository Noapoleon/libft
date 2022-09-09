/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:43:58 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/09 03:32:51 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	size_t	len;
	size_t	i;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	len = ft_strlen(s);
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tmp[i] = f(i, s[i]);
		++i;
	}
	return (tmp);
}

/*
#include <stdio.h>
char	cap_e(unsigned int x, char c)
{
	(void)x;

	if (c == 'e')
		return ('E');
	return (c);
}
char	space_to_underscore(unsigned int x, char c)
{
	(void) x;

	if (c == ' ')
		return ('_');
	return (c);
}
int	main(int ac, char **av)
{
	(void)ac;
	char *s1;

	s1 = ft_strmapi(av[1], &space_to_underscore);
	fprintf(stderr, "av[1] ------> %s\n", av[1]);
	fprintf(stderr, "ft_strmapi -> %s\n", s1);
	return (0);
}
*/
