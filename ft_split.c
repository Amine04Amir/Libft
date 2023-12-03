/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:08:58 by mamir             #+#    #+#             */
/*   Updated: 2023/12/03 09:22:21 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s && s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

static char	**free_ptr(char **str, int n)
{
	while (n > 0)
	{
		free(str[--n]);
	}
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		n;

	ptr = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	n = 0;
	while (s && s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = 0;
		while (s[i] != c && s[i] != '\0' && j++ > -1)
			i++;
		ptr[n++] = ft_substr(s, i - j, j);
		if (ptr[n - 1] == NULL)
			return (free_ptr(ptr, n));
	}
	ptr[n] = NULL;
	return (ptr);
}
