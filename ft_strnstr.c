/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:51:39 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/18 22:02:21 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*str)
	{
		if (haystack[j] == needle[j])
		{
			i = 1;
			while (str[i] && haystack[i] == needle[i])
				i++;
			if (!needle[i])
				return ((char *) haystack);
		}
		haystack++;
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