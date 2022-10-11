/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:39:22 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/11 05:03:35 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d = dst;
    const char *s = src;
    if (d < s)
        while (len--)
            *d++ = *s++;
    else
    {
      const char *ls = s + (len-1);
      char *ld = d + (len-1);
        while (len--)
            *ld-- = *ls--;
    }
  return dst;
}
/*
int main () 
{
   char s1[] = "anas jaidi";
    char t1[255];
    int i1 = -1;
    char s[] = "anas jaidi";
    char t[255];
    int i = -1;

    while (s[++i])
        t[i + 4] = s[i];
    while (s1[++i1])
        t1[i1 + 4] = s1[i1];
    printf("result : %s\n", memmove(t, t + 4, 10));
    printf("result : %s\n", ft_memmove(t1, t1 + 4, 10));
}
*/