/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:40:07 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/20 05:10:59 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MAXLONG 9223372036854775807

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	r;
	int					s;

	i = 0;
	r = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	if (r > MAXLONG && s == 1)
		return (-1);
	else if (r > MAXLONG && s == -1)
		return (0);
	return (r * s);
}
// int main()
// {
// 	printf("%d\n",ft_atoi("-9223372036854775807"));
// 	printf("%d\n",atoi("-9223372036854775807"));
// 	printf("%d\n",ft_atoi("9223372036854775807"));
// 	printf("%d\n",atoi("9223372036854775807"));
// }