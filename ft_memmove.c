/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:39:22 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/06 19:41:16 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (d == src)
		return (dst);
	if (d < s)
		ft_memcpy(d, s, len);
	else
	{
		while (i < len)
		{
			d[len - 1 - i] = s[len - 1 - i];
			i++;
		}
	}
	return (dst);
}

// int main () 
// {

// 	char src[] = "lorem ipsum dolor sit amet";
// 	char dst[] = "";
// 	printf("%s\n", memmove(dst, src, 8));

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
//     // int s1[] = {10,10,10,10};

//     printf("the value is : %s\n",(char *)ft_memmove("abc","abc",3));
//     // printf("the value is : %s\n", (char *)ft_memmove("abc","abc",3));
// }
// 1 2 3 4 5 6  7 8