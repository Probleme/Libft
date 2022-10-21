/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:38:46 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/21 16:18:23 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	lens1;
	int		i;

	i = 0;
	if (!s1)
		return (0);
	lens1 = ft_strlen(s1);
	str = (char *) malloc(sizeof(char) * (lens1 + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[lens1++] = s2[i];
		i++;
	}
	str[lens1] = '\0';
	return (str);
}
// int main()
// {
//     char s1[] = "test strjoin function ";
//     char s2[] = "";

//     char *dest = ft_strjoin(s1, s2);
//     printf("%s\n", dest);
// }