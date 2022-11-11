/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 05:56:27 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/11 16:15:52 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// #include <fcntl.h>
// int main()
// {
// 	int fd = open("test.c",O_WRONLY | O_CREAT);
// 	ft_putstr_fd("test fd",fd);
// 	printf("file descriptor is = %d\n",fd);
// 	close(fd);
// }