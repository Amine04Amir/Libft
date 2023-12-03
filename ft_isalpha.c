/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:37:38 by mamir             #+#    #+#             */
/*   Updated: 2023/11/14 15:35:16 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>

// int main()
// {
// 	int	i = 'a';
// 	int	j = '1';

// 	if (ft_isalpha(i) == 1)
// 		printf("%c: is alpha\n", i);
// 	else
// 		printf("%c: isn't\n", i);
// 	if (ft_isalpha(j) == 1)
// 		printf("%c: is alpha\n", j);
// 	else
// 		printf("%c: isn't\n", j);
// 	return 0;
// }