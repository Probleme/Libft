/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:19:46 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/06 20:18:54 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char )c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *) s + i);
	return (NULL);
}

// int main()
// {
//     char a[] = "Ayoub";
//     printf("%s\n",ft_strchr(a,'y'));
//     char a1[] = "Ayoub";
//     printf("%s\n",strchr(a1,'y'));
// }