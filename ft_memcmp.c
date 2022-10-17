/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:01:32 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/17 12:35:14 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i] && i == n - 1)
			return (0);
		if (!(str1[i] == str2[i]))
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	char a[] = "t\200";
// 	char b[] = "t\0";
// 	printf("%d\n",ft_memcmp(a,b,2));
// 	char a1[] = "t\200";
// 	char b1[] = "t\0";
// 	printf("%d",memcmp(a1,b1,2));
// }