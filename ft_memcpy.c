/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:12:46 by mamir             #+#    #+#             */
/*   Updated: 2023/11/15 17:25:35 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* No-overlap */
// int main()
// {
// 	char src[] = "Hello World";
// 	char dst[20];

// 	ft_memcpy(dst, src, 5);
// 	printf("Dest: %s\n", dst);
// }
/* With-overlap */
// int main()
// {
// 	char src[] = "abcdefg";
// 	ft_memcpy(src+2, src, 3);
// 	printf("Joe who : %s\n", src+2);
// }
