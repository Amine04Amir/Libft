/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:45:52 by mamir             #+#    #+#             */
/*   Updated: 2023/11/15 11:44:19 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
	{
		return ((char *)big);
	}
	while (*big && len >= little_len)
	{
		if (!ft_strncmp(big, little, little_len))
		{		
			return ((char *)big);
		}	
		big++;
		len--;
	}
	return (NULL);
}
