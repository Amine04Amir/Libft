/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:12:44 by mamir             #+#    #+#             */
/*   Updated: 2023/11/18 15:15:52 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	while (i < (size - 1) && src[i] != '\0' && size > 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (src_len);
}

// int main()
// {
// 	char src[] = "saminamina";
// 	char dest[20];

// 	ft_strlcpy(dest, src, 0);
// 	printf("src_len : %zu\n", ft_strlcpy(dest, src, 0));
// 	printf("src_len : %s\n", dest);
// }