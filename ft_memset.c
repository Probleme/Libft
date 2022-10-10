/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:18:27 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/10 02:39:21 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    i = 0;
    while (len > i)
    {
        ((unsigned char *)b)[i] = (unsigned char )c;
        i++;
    }
    return b;
}
int main()
{
    char a[] = "Ayoub";
    printf("%s",ft_memset(a,98,2));
}