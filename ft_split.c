/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:53:54 by ataouaf           #+#    #+#             */
/*   Updated: 2022/11/06 23:25:50 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s == 0)
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		count++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	if (n == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**free_alloc(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	save;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!str)
		return (NULL);
	while (i < word_count(s, c) && s[j])
	{
		while (s[j] == c)
			j++;
		save = j;
		while (s[j] != c && s[j])
			j++;
		str[i] = ft_strndup(&s[save], j - save);
		if (str[i++] == 0)
			return (free_alloc(str));
	}
	str[i] = NULL;
	return (str);
}

// int main()
// {
// 	char str[] = "strtok needs to be called several times to split a string";
// 	// int init_size = strlen(str);
// 	char delim[] = " ";

// 	// char *ptr = strtok(str, delim);

// 	// while(str != NULL)
// 	// {
// 	// 	printf("'%s'\n", ptr);
// 	// 	ptr = strtok(NULL, delim);
// 	// }

// 	/* This loop will show that there are zeroes in the str after tokenizing */
// 	// for (int i = 0; i < init_size; i++)
// 	// {
// 	// 	printf("%d ", str[i]); /* Convert the character to integer, in this case
// 	// 						   the character's ASCII equivalent */
// 	// }
// 	// printf("\n");

// 	return 0;
// }
