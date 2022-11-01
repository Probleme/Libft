/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:07:34 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/31 06:25:24 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;
	size_t i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	if (dstsize > dst_len + 1)
	{
		while (src[i] != '\0' && dst_len + 1 + i < dstsize)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
	// size_t	lsrc;
	// size_t	ldst;
	// size_t	i;
	// size_t	r;

	// if (!dst && dstsize == 0)
	// 	return (0);
	// i = 0;
	// lsrc = ft_strlen(src);
	// ldst = ft_strlen(dst);
	// if (ldst > dstsize)
	// 	r = lsrc + dstsize;
	// else
	// 	r = lsrc + ldst;
	// while (src[i] && ldst < dstsize - 1 && dstsize)
	// {
	// 	dst[ldst] = src[i];
	// 	ldst++;
	// 	i++;
	// }
	// dst[ldst] = '\0';
	// return (r);
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
