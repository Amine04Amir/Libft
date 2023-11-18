/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:28:38 by mamir             #+#    #+#             */
/*   Updated: 2023/11/18 13:29:45 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*ptr;

	j = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[start] != '\0' && len > 0)
	{
		ptr[j] = s[start];
		j++;
		len--;
		start++;
	}
	ptr[j] = '\0';
	return (ptr);
}
