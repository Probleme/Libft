/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:51:39 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/19 04:11:45 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] )
		{
			j++;
			if (haystack[i] && haystack[i] == needle[j])
				return ((char *) haystack);
		}
		i++;
	}
	return (0);
}
int main()
{
	char a[] = "lorem ipsum dolor sit amet";
	char d[] = "sit";
	printf("%s\n",strnstr(a,d,15));
	char a1[] = "lorem ipsum dolor sit amet";
	char d1[] = "sit";
	printf("%s",ft_strnstr(a1,d1,15));
}