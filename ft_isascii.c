/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:45:16 by mamir             #+#    #+#             */
/*   Updated: 2023/11/03 09:25:18 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>

// int main()
// {
// 	int i = 10;
// 	int j = 128;

// 	if (ft_isascii(i) == 1)
// 		printf("%d: isascii\n", i);
// 	else
// 		printf("%d: is not ascii\n", i);
// 	if (ft_isascii(j) == 1)
// 		printf("%d: isascii\n", j);
// 	else
// 		printf("%d: is not ascii\n", j);
// 	return 0;
// }
