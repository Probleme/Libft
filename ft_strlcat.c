/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 05:33:49 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/13 20:33:19 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t lsrc = ft_strlen(src);
    //size_t ldst = ft_strlen(dst);
    if (dstsize == 0)
        return lsrc;
    
    while (*src && --dstsize)
         *dst++ = *src++;
    
    return dstsize;
}
int main()
{
    
    char src[20] = "Ayoub Taouaf";
    char dst[20] = "abcdef";
    printf("%zu\n%s",strlcat(dst, src, 0),dst);
    //printf("%s\n",dst);
    
    // char src1[] = "Ayoub Taouaf";
    // char dst1[] = "CCCCCCCCCCCCCCCA";
    // printf("%zu\n",strlcat(dst1, src1, 6));
    // printf("%s\n",dst1);
}