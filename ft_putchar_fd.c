/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 05:49:03 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/11 16:15:42 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <fcntl.h>
// #include <errno.h>
// int main()
// {
//     // char p[100];
//     int fd = open("test1.txt", O_RDWR | O_CREAT, 777);
//     // if (fd == -1)
//     // {
//     //     printf("ERROR NUMBER : %d\n",errno);
//     //     perror("SYSTEME ");
//     //     return (errno);
//     // }
//     ft_putstr_fd("A", fd);
//     close(fd);
//     // fd = open("file.txt",O_RDONLY, 777);
//     // read(fd, p, 25);
//     // write (1, p, 25);
// }