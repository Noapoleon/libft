/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:52:15 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/24 18:03:44 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		++len;
	return (len);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	fprintf(stderr, "ft_strlen -> %lu\n", ft_strlen(av[1]));
	return (0);
}
*/
