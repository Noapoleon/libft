/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 02:08:08 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/27 14:54:57 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_iswspc(int c)
{
	return (((c >= 9) && (c <= 13)) || (c == ' '));
}

int	ft_atoi(const char *nptr)
{
	long nb;
	int sign;

	nb = 0;
	while (*nptr && my_iswspc(*nptr))
		++nptr;
	sign = 1;
	if ((*nptr == '-') || (*nptr == '+'))
	{
		if (*nptr == '-')
			sign = -1;
		++nptr;
	}
	while (ft_isdigit(*nptr))
		nb = (nb * 10) + (*nptr++ - 48);
	return (sign * (int)nb);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char ** av)
{
	(void)ac;
	fprintf(stderr, "atoi ----> %d\n", atoi(av[1]));
	fprintf(stderr, "ft_atoi -> %d\n", ft_atoi(av[1]));
	return (0);
}
*/
