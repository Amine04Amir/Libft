/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:08:58 by mamir             #+#    #+#             */
/*   Updated: 2023/11/23 10:09:21 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
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
			while(s[i] && s[i] != c)
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

static char	**free(char **str, int n)
{
	while (n > 0)
	{
		free(str[--n]);
	}
	free(str);
	return (0);
}

char **ft_split(char const *s, char c)
{
	char **ptr;
	int	i;
	int	n;
	int	j;

	ptr = (char **)malloc((wordcount(s, c) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	n = 0;


}
