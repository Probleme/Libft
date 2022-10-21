/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:07:34 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/21 02:18:53 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lsrc;
	size_t	ldst;
	size_t	i;
	size_t	r;

	if (!dst && dstsize == 0)
		return (0);
	i = 0;
	lsrc = ft_strlen(src);
	ldst = ft_strlen(dst);
	if (ldst > dstsize)
		r = lsrc + dstsize;
	else
		r = lsrc + ldst;
	while (src[i] && ldst < dstsize - 1 && dstsize)
	{
		dst[ldst] = src[i];
		ldst++;
		i++;
	}
	dst[ldst] = '\0';
	return (r);
}

// int main()
// {
// 	char src[] = "Ayoub Taouaf";
// 	// char dst[11] = "";
// 	printf("%zu\n",strlcat(0, src, 0));
// 	printf("%s\n",src);

//  	char src1[] = "Ayoub Taouaf";
// 	// char dst1[11] = "";
// 	printf("%zu\n",ft_strlcat(0, src1, 0));
// 	printf("%s\n",src1);
// }
