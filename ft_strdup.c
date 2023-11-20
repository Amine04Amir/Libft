/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:36:25 by mamir             #+#    #+#             */
/*   Updated: 2023/11/20 12:31:08 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;

	i = 0;
	new = ((char *)malloc((sizeof(char) * ft_strlen(s1)) + 1));
	if (!new)
		return (NULL);
	while (*s1)
	{
		new[i++] = *s1++;
	}
	new[i] = '\0';
	return (new);
}
