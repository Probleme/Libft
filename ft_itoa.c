/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:24:25 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/08 17:29:26 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_negorpos(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while (nbr)
	{
		if (nbr != 0)
		{
			len++;
			nbr /= 10;
		}
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = ft_nbrlen(n);
	res = malloc((len + 1) * (sizeof(char)));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		len--;
		res[len] = ft_negorpos(n % 10) + 48;
		n /= 10;
	}
	return (res);
}
