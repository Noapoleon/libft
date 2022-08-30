/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:51:51 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/24 20:45:57 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')));
}

/*
#include <stdio.h>
int	main(void)
{
	fprintf(stderr, "A\t\t= %d\n", ft_isalnum('A'));
	fprintf(stderr, "Z\t\t= %d\n", ft_isalnum('Z'));
	fprintf(stderr, "a\t\t= %d\n", ft_isalnum('a'));
	fprintf(stderr, "z\t\t= %d\n", ft_isalnum('z'));
	fprintf(stderr, "0\t\t= %d\n", ft_isalnum('0'));
	fprintf(stderr, "9\t\t= %d\n", ft_isalnum('9'));
	fprintf(stderr, "(int)64\t\t= %d\n", ft_isalnum(64));
	fprintf(stderr, "(int)91\t\t= %d\n", ft_isalnum(91));
	fprintf(stderr, "(int)96\t\t= %d\n", ft_isalnum(96));
	fprintf(stderr, "(int)123\t= %d\n", ft_isalnum(123));
	fprintf(stderr, "(int)47\t\t= %d\n", ft_isalnum(47));
	fprintf(stderr, "(int)58\t\t= %d\n", ft_isalnum(58));
	return (0);
}
*/
