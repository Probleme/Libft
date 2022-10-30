/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 06:58:37 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/28 16:13:37 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n > i)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	int a[] = {1,2,2,3,4};
// 	printf("%d\n",ft_memchr(a,3, 5));
// 	// char a1[] = "Ayoub";
// 	// printf("%s",ft_memchr(a1,'o',6));

// 	// int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	// printf("%s\n", (char *)memchr(tab, -1, 7));

// 	// int tab1[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	// printf("%s", (char *)ft_memchr(tab1, -1, 7));
// }