/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:51:56 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/24 20:45:57 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')));
}

/*
#include <stdio.h>
int	main(void)
{
	fprintf(stderr, "A\t\t= %d\n", ft_isalpha('A'));
	fprintf(stderr, "Z\t\t= %d\n", ft_isalpha('Z'));
	fprintf(stderr, "a\t\t= %d\n", ft_isalpha('a'));
	fprintf(stderr, "z\t\t= %d\n", ft_isalpha('z'));
	fprintf(stderr, "(int)64\t\t= %d\n", ft_isalpha(64));
	fprintf(stderr, "(int)91\t\t= %d\n", ft_isalpha(91));
	fprintf(stderr, "(int)96\t\t= %d\n", ft_isalpha(96));
	fprintf(stderr, "(int)123\t= %d\n", ft_isalpha(123));
	return (0);
}
*/
