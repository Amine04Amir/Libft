/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:36:25 by mamir             #+#    #+#             */
/*   Updated: 2023/11/15 17:19:41 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = ((char *)malloc((sizeof(char) * ft_strlen(src)) + 1));
	if (!new)
		return (NULL);
	while (*src)
	{
		new[i++] = *src++;
	}
	new[i] = '\0';
	return (new);
}
