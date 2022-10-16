/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:40:07 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/16 05:22:37 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i = 0;
    int r = 0;
    int s = 1;
    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32 )
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            s *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + str[i] + 48;
        i++;
    }
    return r*s;
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	printf("%d\n",ft_atoi(" ---+--+1234ab567"));
// 	printf("%d\n",atoi(" ---+--+1234ab567"));
// 	printf("%d\n",ft_atoi("1234567"));
// 	printf("%d\n",atoi("1234567"));
// }