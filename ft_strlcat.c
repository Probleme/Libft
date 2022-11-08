/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:07:34 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/08 01:09:24 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	if (!dst && !dstsize)
		return (0);
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	if (dstsize < ldst + 1)
		return (dstsize + lsrc);
	while (src[i] && ldst + 1 + i < dstsize)
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[ldst + i] = '\0';
	return (ldst + lsrc);
}
