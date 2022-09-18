/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 00:38:03 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/15 22:47:43 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	void	*og_dest;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	og_dest = dest;
	while (n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (og_dest);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	ft_memcpy(((void*)0), ((void*)0), 3);
	return (0);
}
*/
