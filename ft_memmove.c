/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:39:22 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/11 04:49:50 by ataouaf          ###   ########.fr       */
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
      char *ls = s + (len-1);
      char *ld = d + (len-1);
      while (len--)
        *ld-- = *ls--;
    }
  return dst;
}