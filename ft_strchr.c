/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:19:46 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/14 12:14:47 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    char cr = (char)c;
    size_t lens = ft_strlen(s);
    if (c == '\0')
    {
        s = &s[lens];
        return (char *)s;
    }
    
    while (s[i])
    {
        if(s[i] == cr)
        {
            s = &s[i];
            return (char *)s;            
        }
        i++;
    }
    return 0;
}/*
int main()
{
    char a[] = "Ayoub";
    printf("%s\n",ft_strchr(a,0));
    char a1[] = "Ayoub";
    printf("%s\n",strchr(a1,0));
}*/