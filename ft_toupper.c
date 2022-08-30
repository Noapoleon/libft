/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:16:35 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/27 15:17:29 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;

	fprintf(stderr, "normal -----> %s\n", av[1]);
	*av[1] = (char)ft_toupper((int)*av[1]);
	fprintf(stderr, "ft_toupper -> %s\n", av[1]);
	return (0);
}
*/
