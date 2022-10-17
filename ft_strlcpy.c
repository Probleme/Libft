/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 06:16:01 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/17 15:20:57 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lsrc;

	lsrc = ft_strlen(src);
	if (dstsize == 0)
		return (lsrc);
	while (*src && --dstsize)
		*(dst++) = *(src++);
	*dst = '\0';
	return (lsrc);
}


// int main()
// {
// 	char s[] = "Ayoub";
// 	char d[10] ;
// 	printf("%zu\n",ft_strlcpy(d,NULL,0));
// 	printf("%s\n",d);

// 	char s1[] = "Ayoub";
// 	char d1[10] ;
// 	printf("%zu\n",strlcpy(d1,NULL, 0));
// 	printf("%s\n",d1);
// }
