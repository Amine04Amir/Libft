/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:26:49 by mamir             #+#    #+#             */
/*   Updated: 2023/11/20 16:14:31 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		uc1;
	unsigned char		uc2;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		uc1 = (unsigned char)s1[i];
		uc2 = (unsigned char)s2[i];
		if (uc1 != uc2)
		{
			return ((int)(uc1) - (int)(uc2));
		}
		if (uc1 == '\0' || uc2 == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
