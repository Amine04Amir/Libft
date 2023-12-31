/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:50:06 by mamir             #+#    #+#             */
/*   Updated: 2023/11/20 11:41:03 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		i -= 32;
	}
	return (i);
}

// #include <stdio.h>

// int main()
// {
// 	int i = 'a';
// 	printf("Before: %c\nAfter: %c\n",i ,ft_toupper(i));
// }