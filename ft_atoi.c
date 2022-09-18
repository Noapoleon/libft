/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 02:08:08 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/15 21:36:43 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	nb;
	int		sign;

	nb = 0;
	while (*nptr && (((*nptr >= 9) && (*nptr <= 13)) || (*nptr == ' ')))
		++nptr;
	sign = 1;
	if ((*nptr == '-') || (*nptr == '+'))
	{
		if (*nptr == '-')
			sign = -1;
		++nptr;
	}
	while ((*nptr >= '0') && (*nptr <= '9'))
		nb = (nb * 10) + (*nptr++ - 48);
	return (sign * (int)nb);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char ** av)
{
	(void)ac;
	(void)av;

	fprintf(stderr, "long max ------> %ld\n", sizeof(long));
	fprintf(stderr, "atoi ----> %d\n", atoi(av[1]));
	fprintf(stderr, "ft_atoi -> %d\n", ft_atoi(av[1]));
	return (0);
}
*/
