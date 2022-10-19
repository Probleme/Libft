/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:07:34 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/18 22:11:43 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lsrc;
	size_t	ldst;

	lsrc = ft_strlen(src);
	ldst = ft_strlen(dst);
	if (dstsize == 0)
		return (lsrc);
	if (ldst > dstsize)
	{
		while (*src && --dstsize)
			*dst++ = *src++;
	return (lsrc + dstsize);
	}
	if (ldst < dstsize)
	{
		while (*src && --dstsize)
			*dst++ = *src++;
	return	(lsrc + ldst);
	}
	*dst = '\0';
	return (dstsize);
}

// int main()
// {
// 	char src[] = "Ayoub Taouaf";
// 	char dst[11] = "";
// 	printf("%zu\n",strlcat(dst, src, 11));
// 	printf("%s\n",dst);

//  	char src1[] = "Ayoub Taouaf";
// 	char dst1[11] = "";
// 	printf("%zu\n",ft_strlcat(dst1, src1, 11));
// 	printf("%s\n",dst1);
// }
