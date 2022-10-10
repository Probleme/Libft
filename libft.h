#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>

int ft_toupper(int c);
int ft_tolower(int c);
size_t ft_strlen(const char *s);
int ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memset(void *b, int c, size_t len);

#endif