/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:08:20 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/16 05:01:45 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
   size_t lens = ft_strlen(s) - 1;
   if ((char)c == '\0')
        return (char *)s + lens + 1 ;
   while (*(s + lens))
   {
        if (*(s + lens) == c) 
            return (char *) (s + lens) ;
        if (lens == 0)
            break;
        lens--;
   }
   return 0;
}
// int main()
// {
//     char a[] = "bonjourno";
//     printf("%s\n",ft_strrchr(a,0));
//     char a1[] = "bonjourno";
//     printf("%s\n",strrchr(a1,0));
// }