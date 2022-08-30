/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:52:01 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/24 20:45:57 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return ((c >= 0) && (c <= 127));
}

/*
#include <stdio.h>
int	main(void)
{
	fprintf(stderr, "0 = %d\n", ft_isascii(0));
	fprintf(stderr, "1 = %d\n", ft_isascii(1));
	fprintf(stderr, "126 = %d\n", ft_isascii(126));
	fprintf(stderr, "127 = %d\n", ft_isascii(127));
	fprintf(stderr, "128 = %d\n", ft_isascii(128));
	fprintf(stderr, "35000 = %d\n", ft_isascii(35000));
	fprintf(stderr, "69000 = %d\n", ft_isascii(69000));
	fprintf(stderr, "-1 = %d\n", ft_isascii(-1));
	return (0);
}
*/
