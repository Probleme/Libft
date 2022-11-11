/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:39:22 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/09 11:13:44 by ataouaf          ###   ########.fr       */
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
