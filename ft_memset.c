/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:18:27 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/29 14:59:26 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (b);
}
// int main()
// {
// 	printf("%s", ft_memset("lorem ipsum dolor sit amet",'r',15));
// 	// printf("%s", memset("lorem ipsum dolor sit amet",'r',15));
// }