/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 05:19:04 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/16 06:56:44 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    
    if(n == 0)
        return 0;
    while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < n - 1)
        i++;
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}
// int main()
// {
//     char a[] = "ayoub";
//     char b[] = "byoub";
//     printf("%d\n",ft_strncmp(a,b,0));
//     printf("%d\n",strncmp(a,b,0));
// }