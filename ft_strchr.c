/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:43:08 by mamir             #+#    #+#             */
/*   Updated: 2023/11/14 15:33:25 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int character)
{
	while (*s != '\0')
	{
		if (!s)
			return (NULL);
		if (*s == character)
		{
			return ((char *)s);
		}
		s++;
	}	
	return (NULL);
}
