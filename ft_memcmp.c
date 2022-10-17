/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:01:32 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/17 11:40:49 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (str1[i] && str2[i] && i < n - 1)
		i++;
	return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}
int main()
{
	char a[] = "t\200";
	char b[] = "t\0";
	printf("%d\n",ft_memcmp(a,b,2));
	char a1[] = "t\200";
	char b1[] = "t\0";
	printf("%d",memcmp(a1,b1,2));
}