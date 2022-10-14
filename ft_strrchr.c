/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:08:20 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/14 11:34:33 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i = 0;
    char cr = (char) c;
    // size_t lens = ft_strlen(s);
    while (s[i])
    {
        if (s[i] == cr)
            s = &s[i];
        i++;
    }
    return 0;
}
int main()
{
    char a[] = "Ayoub";
    printf("%s\n",ft_strrchr(a,117));
    char a1[] = "Ayoub";
    printf("%s",strrchr(a1,117));
}