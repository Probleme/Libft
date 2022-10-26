/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:08:20 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/26 14:38:07 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	lens;

	lens = ft_strlen(s) - 1;
	if ((char)c == '\0')
		return ((char *)(s + lens + 1));
	while (s[lens] && lens >= 0)
	{
		if (s[lens] == (unsigned char)c)
			return ((char *) (s + lens));
		lens--;
	}
	return (0);
}