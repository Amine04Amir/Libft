/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:28:38 by mamir             #+#    #+#             */
/*   Updated: 2023/11/18 18:06:08 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s) // Null check
		return (NULL);
	if (len > ft_strlen(s) - start) // length adjustment
		len = ft_strlen(s) - start;
	if (ft_strlen(s) <= start) // empty string
		return (ft_strdup(""));
	ptr = (char *)malloc((len + 1) * sizeof(char)); // mem alloc
	if (!ptr) // check for malloc success
		return (NULL);
	while (s[start] != '\0' && len > 0) // substr extraction
	{
		ptr[i] = s[start]; // begin from the start index
		i++;
		len--;
		start++;
	}
	ptr[i] = '\0'; // null terminate the substr
	return (ptr);
}

// int main()
// {
// 	char s[] = "Hello world!";
// 	char *ptr = ft_substr(s, 6, 6);
// 	printf("Substr: %s\n", ptr);
// }