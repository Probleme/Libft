/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:17:29 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/17 09:17:56 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *d = dst;
    const char *s = src;
    size_t i = 0;
    if (d == 0 && s == 0)
        return 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dst;
}
// int main()
// {
//     // char src[] = "Ayoub";
//     // char dst[] = "";
//     char src1[] = "Ayoub";
//     char dst1[] = "";
//     // printf("%s\n",memcpy(dst,src,3));
//     printf("%s\n",ft_memcpy(dst1,src1,3));
// }