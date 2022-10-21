/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 05:15:26 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/21 14:37:12 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	lens;
	char			*str;

	if (!s)
		return (0);
	i = 0;
	lens = ft_strlen(s);
	if (lens <= start)
		return ((char *) malloc(1 * sizeof(char)));
	if (lens <= start + 1)
		str = (char *) malloc((lens - start + 1) * sizeof(char));
	else
		str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
// int main()
// {
//     char src[] = "test substr function";

//     char *dest = ft_substr(src, 5, 7);
//     printf("%s\n", dest);
// }