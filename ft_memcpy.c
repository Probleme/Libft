/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:17:29 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/06 19:38:50 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!d && !s)
		return (NULL);
	if (d == s)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int main()
// {
//     // int s1[] = {10,10,10,10};

//     printf("the value is : %s\n",(char *)ft_memcpy("abc","abc",3));
//     // printf("the value is : %s\n", (char *)ft_memmove("abc","abc",3));
// }