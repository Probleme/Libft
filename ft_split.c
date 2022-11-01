/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:53:54 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/30 21:21:02 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	word_length(const char *s, char c, int i)
{
	int count;

	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static void	free_alloc(char **str, int i)
{
	while (i-- > 0)
		free(str[i]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		count;
	int		size;
	char	**str;

	i = 0;
	j = 0;
	count = word_count(s, c);
	if (!((str = (char **)malloc((count + 1) * sizeof(char *)))))
		return (0);
	while (count > j)
	{
		while (s[i] == c)
			i++;
		size = word_length(s, c, i);
		if (!(str[j] == ft_substr(s, i, size)))
		{
			free_alloc(str, j);
			return (0);
		}
		i += size;
		j--;
	}
	str[j] = 0;
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
