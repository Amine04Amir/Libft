/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:43:08 by mamir             #+#    #+#             */
/*   Updated: 2023/11/15 14:14:21 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int character)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)character)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)character == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
