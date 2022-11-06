/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:07:34 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/06 18:30:56 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	if (!dst && !dstsize)
		return (0);
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	if (dstsize < ldst + 1)
		return (dstsize + lsrc);
	while (src[i] && ldst + 1 + i < dstsize)
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[ldst + i] = '\0';
	return (ldst + lsrc);
}

// int main()
// {
// 	char src[] = "lorem ipsum dolor sit amet";
// 	char dst[10] = "";
// 	ft_memset(dst,'r',15);
// 	printf("%zu\n",strlcat(dst, src, 5));
// 	printf("%s\n",src);
//  	// char src1[] = "Ayoub Taouaf";
// 	// // char dst1[11] = "";
// 	// printf("%zu\n",ft_strlcat(0, src1, 0));
// 	// printf("%s\n",src1);
// }
