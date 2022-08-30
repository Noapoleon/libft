/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:51:41 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/24 18:15:18 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = '\0';
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	fprintf(stderr, "before memset -> %s\n", av[1]);
	ft_bzero(av[1]+5, 3);
	fprintf(stderr, "before memset -> %s\n", av[1]);
	return (0);
}
*/
