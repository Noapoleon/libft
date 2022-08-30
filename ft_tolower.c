/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:16:35 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/27 15:22:15 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;

	fprintf(stderr, "normal -----> %s\n", av[1]);
	*av[1] = (char)ft_tolower((int)*av[1]);
	fprintf(stderr, "ft_toupper -> %s\n", av[1]);
	return (0);
}
*/
