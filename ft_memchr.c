/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:49:38 by mamir             #+#    #+#             */
/*   Updated: 2023/11/11 12:37:39 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;
	size_t				i;

	p = s;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == uc)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
