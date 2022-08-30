/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:51:31 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/30 19:09:45 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*tmp;
	char	*og_tmp;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (tmp == NULL)
		return (NULL);
	og_tmp = tmp;
	while (*s1)
		*tmp++ = *s1++;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = '\0';
	return (og_tmp);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	char *s1;

	s1 = ft_strjoin(av[1], av[2]);
	fprintf(stderr, "av[1] -> %s\n", av[1]);
	fprintf(stderr, "av[2] -> %s\n", av[2]);
	fprintf(stderr, "s1 ----> %s\n", s1);
	return (0);
}
*/
