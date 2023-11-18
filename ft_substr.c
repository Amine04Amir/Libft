/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:28:38 by mamir             #+#    #+#             */
/*   Updated: 2023/11/18 13:18:21 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_fill(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;
	int		j;

	i = start;
	j = 0;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[i] != '\0' && len > 0)
	{
		ptr[j] = s[i];
		i++;
		j++;
		len--;
	}
	ptr[j] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	if (ft_strlen(s) <= start)
	{
		return (ft_strdup(""));
	}
	return (ft_fill(s, start, len));
}
