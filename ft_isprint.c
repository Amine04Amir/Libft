/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:10:30 by mamir             #+#    #+#             */
/*   Updated: 2023/11/03 09:25:49 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>

// int main()
// {
// 	int x = 33;
// 	int y = 127;

// 	if (ft_isprint(x) == 1)
// 		printf("%d: is printable\n", x);
// 	else
// 		printf("%d: is not printable\n", x);
// 	if (ft_isprint(y) == 1)
// 		printf("%d: is printable\n", y);
// 	else
// 		printf("%d: is not printable\n", y);
// 	return 0;
// }