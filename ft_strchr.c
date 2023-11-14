/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:43:08 by mamir             #+#    #+#             */
/*   Updated: 2023/11/14 16:02:30 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int character)
{
	while (*s != '\0')
	{
		if (*s == character)
		{
			return ((char *)s);
		}
		s++;
	}
	if (character == '\0')
	{
		return ((char *)s);
	}	
	return (NULL);
}
