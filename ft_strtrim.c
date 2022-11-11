/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:23:20 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/11 16:45:37 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	str = (char *)malloc((end - start + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, &s1[start], end - start + 1);
	return (str);
}
// int main()
// {
// 	// char a[] = "";
// 	// char b[]= "";
// 	printf("%s",ft_strtrim("",""));
// }