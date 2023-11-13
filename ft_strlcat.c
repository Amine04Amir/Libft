/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:53:46 by mamir             #+#    #+#             */
/*   Updated: 2023/11/11 16:03:30 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	copy_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	copy_len = 0;
	if (size <= dest_len)
		return (size + src_len);
	copy_len = size - dest_len - 1;
	if (src_len < copy_len)
	{
		copy_len = src_len;
	}
	ft_memcpy(dest + dest_len, src, copy_len);
	dest[dest_len + copy_len] = '\0';
	return (total_len);
}
