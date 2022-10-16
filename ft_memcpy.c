/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:17:29 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/16 05:17:19 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *d = dst;
    const char *s = src;
    while (n--)
        *(d++) = *(s++);
    return dst;
}
// int main()
// {
//     char src[] = "";
//     char dst[] = "";
//     printf("%s\n",ft_memcpy(dst,src,0));
//     char src1[] = "";
//     char ds1t[] = "";
//     printf("%s\n",memcpy(dst,src,0));
// }