/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:53:58 by mamir             #+#    #+#             */
/*   Updated: 2023/11/15 11:28:52 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = 0;
	total_size = count * size;
	ptr = malloc(total_size);
	if (count != 0 && total_size / count != size) //check for allocation succession
	{ 
		return (NULL); // if the condition is true == overflow ; return null
	}
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, total_size); // initialize the allocated memory block with zero values
	}
	return (ptr);
}

// int main()
// {
// 	int *n;
// 	int count = 5;
// 	int size = sizeof(int);
	
// 	n = (int *)ft_calloc(count, size);
// 	if ( n != NULL)
// 	{
// 		int i = 0;
// 		while (i < count)
// 		{
// 			i++;
// 			printf("%d\n", n[i]);
// 		}
// 	}
// 	return 0;
// }