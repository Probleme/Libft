/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:19:46 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/14 11:19:56 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    char cr = (char)c;
    while (s[i])
    {
        if(s[i] == cr)
            s = &s[i];
        i++;
    }
    return 0;
}
int main()
{
    char a[] = "Ayoub";
    printf("%s\n",strchr(a,121));
    char a1[] = "Ayoub";
    printf("%s",strchr(a1,121));
}