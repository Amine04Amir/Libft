/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:52:45 by mamir             #+#    #+#             */
/*   Updated: 2023/11/03 09:24:56 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int i)
{
	if (i >= '0' && i <= '9')
	{
		return (1);
	}
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
// 	int i = 'a';
// 	int j = '@';

// 	if (ft_isalnum(i) == 1)
// 		printf("%c : is alnum \n",i);
// 	else
// 		printf("%c : isn't \n",i);
// 	ft_isalnum(j);
// 	if (ft_isalnum(j) == 1)
// 		printf("%c : is alnum \n",j);
// 	else
// 		printf("%c : isn't \n",j);
// 	return 0;
// }
