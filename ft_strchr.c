/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:19:46 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/13 22:28:16 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

char *ft_strchr(const char *s, int c)
{
    char c0 = c;
    char *res;
    int i = 0;
    while (s[i++] )
    {
        if(s[i++] == c)
            return ;
        else
            return NULL;
    }
}
int main()
{
    char ayoub[] = "Ayoub";
    printf("%s",strchr())
}