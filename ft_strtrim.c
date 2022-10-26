/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:23:20 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/26 11:29:30 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip(const char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && skip(s1[start], set))
		start++;
	while (s1[end] && skip(s1[end], set))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}
// int main()
// {
// 	char a[] = "----//ay/o*ub//*******";
// 	char b[]= "-/*";
// 	printf("%s",ft_strtrim(a,b));
// }