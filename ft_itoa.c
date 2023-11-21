/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:29:42 by mamir             #+#    #+#             */
/*   Updated: 2023/11/21 17:22:22 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(long num)
{
	int	i;

	i = 0;
	if (num <= 0)
	{
		n = -n;
		i++;	
	}
	while (num)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*new_str(size_t size)
{
	char	*res;

	res = malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	ft_bzero(res, size);
	return (res);
}

static char	*res_define(char *res, int len, long n)
{
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	res[--len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[len--] = n % 10 + 48;
		n /= 10;
	}
	return (res);
}

char	*ft_itoa(int num)
{
	long	num;
	char	*res;
	int		len;

	num = n;
	len = numlen(num);
	res = ft_strnew(len + 1);
	if (!res)
		return (NULL);
	return (res_define(res, len, num));
}
