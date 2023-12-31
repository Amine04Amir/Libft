/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:15:31 by mamir             #+#    #+#             */
/*   Updated: 2023/11/18 18:06:23 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	char	*p;

	if (!s1 && !s2) // empty strings
		return (NULL);
	else if (!s1) ///////////////
		return (ft_strdup(s2));// --> One is empty strdup the other one
	else if (!s2)///////////////
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	p = (char *)malloc (sizeof(char) * (len1 + len2 + 1));
	if (!p) // malloc fails !
		return (NULL);
	ft_strcpy(p, s1); // copy chars from s1 to p
	i = 0;
	while (s2[i])
	{
		p[len1++] = s2[i++]; // copy from s2 starting from the end of s1 p[len1]
	}
	p[len1] = '\0'; // Null terminate str
	return (p);
}

// int main()
// {
// 	char s1[] = "Hello, ";
// 	char s2[] = "World!";

// 	char *p = ft_strjoin(s1, s2);
// 	printf("%s\n", p);
// }
