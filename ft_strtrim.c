/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:23:20 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/21 18:09:35 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*skip(char *str, char set)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == set)
			return 1;
		i++;
	}
}

// char	*ft_strtrim(const char *s1, const char *set)
// {
// 	char	*str;
// 	size_t	i;
// 	size_t	j;
// 	size_t	lens;

// 	i = 0;
// 	j = 0;
// 	if (!s1)
// 		return (0);
// 	lens = ft_strlen(s1);
// 	str = malloc(lens + 1 * sizeof(char));
// 	while (s1[i] && set[i])
// 	{
// 		if (s1[i] == set[j])
// 		{
// 			j = 0;
// 			while (s1[i + j] == set[j])
// 			{
// 				if (s1[i + j] != set[j])
// 				{
// 					return ((char *)&s1[i]);
// 				}
// 				j++;
// 			}
// 		}
// 		i++;
// 	}
// 	return ((char *)str);
// }
int main()
{
	printf("%s",skip("///ayoub///","/"));
}