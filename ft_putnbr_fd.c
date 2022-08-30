/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:22:10 by nlegrand          #+#    #+#             */
/*   Updated: 2022/08/30 18:36:54 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nn;
	int		neg;
	long	pow;
	char	tmp;

	nn = (long)n * (1 + (neg = n < 0) * -2);
	pow = 1;
	while ((nn / pow) >= 10)
		pow *= 10;
	write(fd, "-", neg);
	while (pow > 0)
	{
		tmp = '0' + ((nn / pow) % 10);
		write(fd, &tmp, 1);
		pow /= 10;
	}
}

/*
int	main(void)
{
	ft_putnbr_fd(42, 2);
	return (0);
}
*/
