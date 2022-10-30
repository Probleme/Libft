/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:15:42 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/30 18:14:16 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	// size_t	max;

	// max = -1;
	// if (count >= max / size)
	// 	return (NULL);
	res = malloc(count * size);
	if (!res)
		return (0);
	ft_bzero(res, (count * size));
	return (res);
}
// int main()
// {

// 	// char t[] = "jkbajuyshg";
// 	// printf("%p-->s\n",calloc(SIZE_MAX-10000000 ,SIZE_MAX-100000));
// 	// char t1[] = "jkbajuyshg";
// 	char *c = ft_calloc(SIZE_MAX - 1 ,0);
// 	printf("p-->%p\n",c);
// 	// char t[] = "jkbajuyshg";
// 	// char *c1 = calloc(SIZE_MAX - 1 ,0);
// 	// printf("p-->%p",c1);
// 	// int i = 0;
// 	// while (i++ < SIZE_MAX)
// 	// 	*(c++)= 'a';
// }
