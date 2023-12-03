/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:02:30 by mamir             #+#    #+#             */
/*   Updated: 2023/11/03 09:24:19 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>

// int main()
// {
// 	int x = '5';
// 	int y = 'a';

// 	if (ft_isdigit(x) == 1)
// 		printf("%c: isdigit\n", x);
// 	else
// 		printf("%c: is not a digit\n", x);
// 	if (ft_isdigit(y) == 1)
// 		printf("%c: is a digit\n", y);
// 	else
// 		printf("%d: is not a digit\n", y);
// 	return 0;
// }