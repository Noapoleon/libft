/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:52:05 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/24 20:45:57 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

/*
#include <stdio.h>
int	main(void)
{
	fprintf(stderr, "0\t\t= %d\n", ft_isdigit('0'));
	fprintf(stderr, "9\t\t= %d\n", ft_isdigit('9'));
	fprintf(stderr, "(int)47\t\t= %d\n", ft_isdigit(47));
	fprintf(stderr, "(int)58\t\t= %d\n", ft_isdigit(58));
	return (0);
}
*/
