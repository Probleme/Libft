/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:19:46 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/17 14:07:42 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
		if (*s++ == c)
			return ((char *)s - 1);
	if ((char)c == '\0')
		return ((char *) s);
	return (0);
}

// int main()
// {
//     char a[] = "Ayoub";
//     printf("%s\n",ft_strchr(a,0));
//     char a1[] = "Ayoub";
//     printf("%s\n",strchr(a1,0));
// }