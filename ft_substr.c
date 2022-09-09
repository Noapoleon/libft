/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:38:09 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/09 16:26:42 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;
	size_t	size;

	if ((size_t)start >= ft_strlen(s) || len == 0)
		size = 1;
	else if (ft_strlen(s + start) > len)
		size = len + 1;
	else
		size = ft_strlen(s + start) + 1;
	tmp = (char *)malloc(sizeof(char) * size);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < (size - 1) && s[(size_t)start + i])
	{
		tmp[i] = s[(size_t)start + i];
		++i;
	}
	tmp[i] = '\0';
	return (tmp);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	char *s1;

	s1 = ft_substr(av[1], 5, 7);
	fprintf(stderr, "av[1] -----> %s\n", av[1]);
	fprintf(stderr, "av[1] -----> %p\n", av[1]);
	fprintf(stderr, "ft_substr -> %s\n", s1);
	fprintf(stderr, "ft_substr -> %p\n", s1);
	return (0);
}
*/
