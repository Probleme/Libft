/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 05:33:49 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/13 08:57:02 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t lsrc = ft_strlen(src);
    size_t ldst = ft_strlen(dst);
    if (dstsize == 0)
        return lsrc;
    if (dstsize > 0)
        return lsrc + ldst;
    
    while (*src && --dstsize)
        *dst++ = *src++;
    
    return dstsize;
}
int main()
{
    char src[] = "Ayoub";
    char dst[1] ;
    printf("%zu\n",ft_strlcat(src,src+2,5));
    printf("%s\n",src);
    
    char src1[] = "Ayoub";
    char dst1[1] ;
    printf("%zu\n",strlcat(src1,src1+2,5));
    printf("%s\n",src1);
}