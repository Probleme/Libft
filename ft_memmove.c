/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:39:22 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/12 00:16:42 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d = dst;
    const char *s = src;
    
    if (d < s)
        while (len--)
            *(d++) = *(s++);
    else 
        while(len--)
            *(d + len) = *(s + len);
  return dst;
}
/*
int main () 
{
    char s1[10] = "Abde llah";
    char t1[255];
    int i1 = -1;

    
    char s[10] = "Abde llah";
    char t[255];
    int i = -1;

    while (s[++i])
        t[i + 4] = s[i];
    printf("result : %s\n", memmove(t, t + 4, 10));
        
    while (s1[++i1])
        t1[i1 + 4] = s1[i1];
    printf("result : %s\n", ft_memmove(t1, t1 + 4, 10));
}
*/
/*
int main()
{
    int s1[4] = {10,10,10,10};

    int d1[10]; 
    int d[10];
    ft_memmove(d1,s1,4);
    ft_memmove(d,s1,4);
    printf("the value is : %d\n",d1[0]);
    printf("the value is : %d\n",d[0]);
}
*/