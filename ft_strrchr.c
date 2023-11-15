/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:17:30 by mamir             #+#    #+#             */
/*   Updated: 2023/11/15 10:59:51 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occ;

	last_occ = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			last_occ = s;
		}
		s++;
	}
	if (*s == c)
	{
		last_occ = s;
	}
	return ((char *)last_occ);
}
