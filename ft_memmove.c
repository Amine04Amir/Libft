/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:21:51 by mamir             #+#    #+#             */
/*   Updated: 2023/11/16 12:10:47 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	d = dest;
	s = src;
	i = 0;
	if (dest == src)
		return (dest);
	// if (!n || dest == src)
	// 	return (dest);

	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {
// 	char src[] = "Hello, mama";
// 	char dest[20];

// 	ft_memmove(dest, src, 5);
// 	printf("%s", dest);
// }