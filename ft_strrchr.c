/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:08:20 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/16 00:26:23 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
   size_t lens = ft_strlen(s);
   if (c == '\0')
   {
        s = &s[lens];
        return (char *) s;
   }
   
   while (lens--)
   {
        if (*s++ == c) 
        {
            s -= 1;    
            return (char *) s;
        }
   }
   return 0;
}
// int main()
// {
//     char a[] = "Ayoub";
//     printf("%s\n",ft_strrchr(a,121));
//     char a1[] = "Ayoub";
//     printf("%s",strrchr(a1,121));
// }