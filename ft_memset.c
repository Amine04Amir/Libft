/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:00:22 by mamir             #+#    #+#             */
/*   Updated: 2023/11/04 12:17:29 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buffer, int value, size_t len)
{
	unsigned char	*c;
	size_t			i;

	c = (unsigned char *)buffer;
	i = 0;
	while (i < len)
	{
		c[i] = (unsigned char)value;
		i++;
	}
	return (buffer);
}
