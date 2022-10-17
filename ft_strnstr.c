/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:51:39 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/17 18:44:29 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i, j;
	unsigned char *str = haystack;
	j = 0;
	i = 0;
	// if (!*needle)
	// 	return ((char *)haystack);
	while (*str)
	{
		if (str[j] == needle[j])
		{
			i = 1;
			while (str[i] && needle[i] == needle[i])
				i++;
			if (!needle[i])
				return ((char *) haystack);
		}
		// haystack++;
		j++;
	}
	return (0);
}
int main()
{
	char a[] = "lorem ipsum dolor sit amet";
	char d[] = "lorem";
	printf("%s\n",strnstr(a,d,5));
	char a1[] = "lorem ipsum dolor sit amet";
	char d1[] = "lorem";
	printf("%s",ft_strnstr(a1,d1,5));
}