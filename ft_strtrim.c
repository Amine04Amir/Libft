/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:17:56 by mamir             #+#    #+#             */
/*   Updated: 2023/11/20 12:26:13 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set) // One of them is empty
		return (NULL);//return NULL
	while (ft_strchr(set, *s1) && *s1 != '\0')//skip matching 'set' chars in s1 
		s1++; // move ptr until != 'set' or reach end
	i = ft_strlen((char *)s1); // calc length of s1
	while (ft_strchr(set, s1[i]) && i != 0) // begin from the end and search for 'set'
		i--; // iterate backwards
	return (ft_substr((char *)s1, 0, i + 1)); // create the trimmed string 
}

// int main()
// {
// 	char str[] = "12345Hello, World12345";
// 	char set[] = "12345";

// 	char *res = ft_strtrim(str, set);
// 	printf("Trimmed str: %s\n", res);
// }