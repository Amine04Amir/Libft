/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:09:47 by mamir             #+#    #+#             */
/*   Updated: 2023/12/03 09:22:27 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/** #include <stdio.h>

void	lower(unsigned int i, char *c)
{
	 if(*c >= 'A' && *c <= 'Z')
		 *c += 32;
}
int main()
{
	 char str[] = "SUIIII";
	 ft_striteri(str,lower);
	 printf("%s",str);
} **/
