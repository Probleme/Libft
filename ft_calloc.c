/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:15:42 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/26 19:39:45 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = malloc(count * size);
	if (!res)
		return (0);
	ft_bzero(res, (count * size));
	return (res);
}
// int main()
// {
// 	char t[] = "jkbajuyshg";
// 	printf("%p--> %s\n",calloc(SIZE_MAX,SIZE_MAX), t );
// 	char t1[] = "jkbajuyshg";
// 	printf("%p--> %s",ft_calloc(SIZE_MAX,SIZE_MAX),t1);
// }