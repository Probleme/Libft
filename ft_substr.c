/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 05:15:26 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/06 18:39:25 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lens;
	char	*str;

	if (!s)
		return (0);
	i = 0;
	lens = ft_strlen(s);
	if (lens <= start)
		len = 0;
	if (len >= ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[start] && len--)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
// int main()
// {
// 	char* str;

// 	str = ft_substr("Ayoub Taouaf", 1, 5);
// 	printf("%s\n", str);
// 	return 0;
// }