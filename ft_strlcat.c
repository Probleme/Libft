/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:07:34 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/17 14:49:09 by ataouaf          ###   ########.fr       */
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
	while (*src && --dstsize)
	{
		if (ldst > dstsize)
			return (lsrc + dstsize);
		else
		{
			return (lsrc + ldst);
			*dst++ = *src++;
		}
	}
	*dst = '\0';
	return (dstsize);
}

// int main()
// {

// 	char src[20] = "Ayoub Taouaf";
// 	char dst[20] = "abcdef";
// 	printf("%zu\n%s",strlcat(dst, src, 0),dst);
// 	printf("%s\n",dst);

//  char src1[] = "Ayoub Taouaf";
// 	char dst1[] = "CCCCCCCCCCCCCCCA";
// 	printf("%zu\n",strlcat(dst1, src1, 6));
// 	printf("%s\n",dst1);
// }
