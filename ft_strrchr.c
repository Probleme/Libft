/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:08:20 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/11 17:07:33 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	lens;

	lens = ft_strlen(s);
	if ((char)c == 0)
		return ((char *)(s + lens));
	while (lens--)
		if (s[lens] == (char)c)
			return ((char *)(s + lens));
	return (NULL);
}
// int main()
// {
// 	printf("%s",ft_strrchr("teste",1024));
// }