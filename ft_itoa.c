/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:29:42 by mamir             #+#    #+#             */
/*   Updated: 2023/12/03 09:21:27 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n = -n;
		i++;
	}
	while (n)
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

static char	*rep_str(char *res, int len, long n)
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

char	*ft_itoa(int n)
{
	long	num;
	char	*res;
	int		len;

	num = n;
	len = numlen(num);
	res = new_str(len + 1);
	if (!res)
		return (NULL);
	return (rep_str(res, len, num));
}
