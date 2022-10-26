/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:39:22 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/26 11:29:11 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (NULL);
	while (len--)
	{
		if (d < s)
			*d++ = *s++;
		else
			*(d + len) = *(s + len);
	}
	return (dst);
}

// int main () 
// {
// 	// char d[] = "";
// 	// char s[] = "";
// 	// printf("%s",memmove(d,s,10));
//     // char s1[10] = "Abde llah";
//     // char t1[255];
//     // int i1 = -1;

//     // char s[10] = "Abde llah";
//     // char t[255];
//     // int i = -1;

//     // while (s[++i])
//     //     t[i + 4] = s[i];
//     // printf("result : %s\n", memmove(t, t + 4, 10));
//     // while (s1[++i1])
//     //     t1[i1 + 4] = s1[i1];
//     // printf("result : %s\n", ft_memmove(t1, t1 + 4, 10));
// }

// int main()
// {
//     int s1[] = {10,10,10,10};

//     int d1[10]; 
//     int d[10];
//     ft_memmove(d1,s1,4);
//     ft_memmove(d,s1,4);
//     printf("the value is : %d\n",d1[0]);
//     printf("the value is : %d\n",d[0]);
// }