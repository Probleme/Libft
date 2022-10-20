/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:15:42 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/20 02:10:38 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = malloc(count * size);
	if (!res)
		return (0);
	ft_bzero(res, count * size);
	return (res);
}
// int main()
// {
// 	char t[] = "jkbajuyshg";
// 	printf("%p--> %s\n",calloc(0,0),t);
// 	char t1[] = "jkbajuyshg";
// 	printf("%p--> %s",ft_calloc(0,0),t1);
// }