/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:19:46 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/14 00:48:08 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    char cr = (char)c;
    const char *str = s;
    // const char *rst;
    while (str[i++])
    {
        if(str[i] == cr)
            str = &str[i++];
        // else
        //     return NULL;
    }
    return 0;
}
// int main()
// {
//     char a[] = "Ayoub";
//     printf("%s\n",strchr(a,121));
//     char a1[] = "Ayoub";
//     printf("%s",strchr(a1,121));
// }