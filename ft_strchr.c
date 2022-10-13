/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:19:46 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/13 23:09:51 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    char *str = *s;
    while (*str++ )
    {
        if(*str++ == c)
            return str;
        else
            return 0;
    }
}
int main()
{
    char ayoub[] = "Ayoub";
    printf("%s",strchr(ayoub,121));
}