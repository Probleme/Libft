/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 06:16:01 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/06 20:12:06 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lsrc;
	size_t	i;

	i = 0;
	lsrc = ft_strlen(src);
	if (dstsize == 0)
		return (lsrc);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lsrc);
}

// int main()
// {
// 	char s[] = "Ayoub";
// 	char d[10] ;
// 	printf("%zu\n",strlcpy(d,s,5));
// 	printf("%s\n",d);

// 	// char s1[] = "Ayoub";
// 	// char d1[10] ;
// 	// printf("%zu\n",strlcpy(d,s1, 5));
// 	// printf("%s\n",d1);
// }
