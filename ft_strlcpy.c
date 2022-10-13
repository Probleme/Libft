/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 06:16:01 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/13 07:59:46 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
 {
  size_t lsrc = ft_strlen(src);
  
  if (dstsize == 0)
    return lsrc;
  
  while (*src && --dstsize)
   *(dst++) = *(src++);
   
  *dst = '\0';
  
  return lsrc;
 }
 /*
 int main()
 {
  char s[] = "Ayoub";
  char d[10] ;
  printf("%zu\n",ft_strlcpy(d,s+1,4));
  printf("%s\n",d);
  
  char s1[] = "Ayoub";
  char d1[10] ;
  printf("%zu\n",strlcpy(d1,s1+1, 4));
  printf("%s\n",d1);
 }
 */