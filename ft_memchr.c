/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 06:58:37 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/17 08:45:13 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    const unsigned char *str = s;
    while (str[i] && n > i)
    {
        if(str[i] == (char) c)
            return (unsigned char *)&str[i];
        i++;
    }
    return 0;
}
// int main()
// {
    // char a[] = "Ayoub";
    // printf("%s\n",memchr(a,'o',6));
    // char a1[] = "Ayoub";
    // printf("%s",ft_memchr(a1,'o',6));
    
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	printf("%s\n", (char *)memchr(tab, -1, 7));
    
// 	int tab1[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	printf("%s", (char *)ft_memchr(tab1, -1, 7));
// }