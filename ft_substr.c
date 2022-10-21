/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 05:15:26 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/21 02:03:12 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		lenght;
	char	*str;

	i = 0;
	lenght = len - start;
	str = malloc(sizeof(char) * (len + 1));
	while (i < len && (*(s + i)) != '\0')
	{
		*str = *(s + i);
		str++;
	}
	*str = '\0';
	return (str - s);
}
int main()
{
    char src[] = "test substr function";

    int m = 7;
    int n = 12;
    char *dest = ft_substr(src, m, n);
    printf("%s\n", dest);
}