/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 05:33:49 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/13 09:53:36 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t lsrc = ft_strlen(src);
    size_t ldst = ft_strlen(dst);
    if (dstsize == 0)
        return lsrc;
    if (ldst > dstsize)
        return lsrc + dstsize;
    if (ldst < dstsize)
        return lsrc + ldst;
    while (*src && --dstsize)
        *dst++ = *src++;
    
    return dstsize;
}
// int main()
// {
//     char src[] = "Ayoub Taouaf";
//     printf("%zu\n",ft_strlcat(src, src+2, 0));
//     printf("%s\n",src);
    
//     char src1[] = "Ayoub Taouaf";
//     printf("%zu\n",strlcat(src1, src1+2, 0));
//     printf("%s\n",src1);
// }