/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:15:31 by mamir             #+#    #+#             */
/*   Updated: 2023/11/16 21:28:50 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t		i;
	size_t		j;
	const char	join;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = malloc(len1 + len2 + 1);
	i = 0;
	j = 0;
	if (!join)
		return (NULL);
	while (j < len1)
		join[i++] == s1[j++];
	while (j < len2)
		join[i++] = s2[j++];
	join[i] = '\0';
	return (join);
}
int main() {
    const char *first = "Hello, ";
    const char *second = "world!";

    char *result = ft_strjoin(first, second);
    if (result != NULL) {
        printf("Concatenated string: %s\n", result);
        free(result);
    }

    return 0;
}

