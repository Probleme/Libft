/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:51:39 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/06 20:00:57 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (haystack == 0 && len == 0)
		return (0);
	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *) &haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char a[] = "lorem ipsum dolor sit amet";
// 	char d[] = "ipsum";
// 	printf("%s\n",strnstr(a,d,11));
// 	char a1[] = "lorem ipsum dolor sit amet";
// 	char d1[] = "ipsum";
// 	printf("%s",ft_strnstr(a1,d1,11));
// }