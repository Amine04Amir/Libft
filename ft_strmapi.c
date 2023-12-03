/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:07:04 by mamir             #+#    #+#             */
/*   Updated: 2023/11/23 15:21:47 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	char			*p;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// char	lower(unsigned int i, char c)
// {
// 	if(c >= 'A' && c <= 'Z')
// 		c += 32;
// 	return (c);
// }

// int main()
// {
// 	char str[] = "SUIIII";
// 	char *p = ft_strmapi(str, lower);
// 	printf("%s\n", p);
// 	free(p); // Don't forget to free the allocated memory
// 	return 0;
// }