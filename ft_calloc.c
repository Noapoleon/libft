/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:28:50 by nlegrand          #+#    #+#             */
/*   Updated: 2022/09/18 11:16:45 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tmp;
	size_t	i;

	if (nmemb > ((size_t)-1 / size))
		return (NULL);
	tmp = malloc(nmemb * size);
	i = 0;
	if (tmp != NULL)
		while (i < (nmemb * size))
			tmp[i++] = 0;
	return (tmp);
}

/*
 * TEST WITH ft_print_memory
 */
