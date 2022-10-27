/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:53:54 by ataouaf           #+#    #+#             */
/*   Updated: 2022/10/26 16:07:10 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		if (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			count++;
		}
	}
	return (count);
}

static int	word_length(const char *s, char c)
{
	int count;

	count = 0;
	while (*s && *s != c)
	{
		count++;
		s++;
	}
	return (count);
}

static void	free_alloc(char **str, int i)
{
	while (i--)
	{
		printf("%d",i);
		free(str[i]);
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	char	**str;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			str[j] = malloc(sizeof(char) * word_length(s, c) + 1);
			// if(j == 3)
			// 	str[j] =  NULL;
			if (!str[j])
			{
				free_alloc(str,j);
				return NULL;
			}
			k = 0;
			while (s[i] && s[i] != c)
				str[j][k++] = s[i++];
			str[j++][k] = '\0';
		}
	}
	str[j] = 0;
	return (str);
}

// int main()
// {
// 	char a[] = "    lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
// 	char c = ' ';
// 	int i =0;
// 	char **r = ft_split(a,c);
// 	if(!r)
// 	{
// 			printf("freed");
// 	}
// 	else
// 		printf("not freed");

// }
// 	// char *q = "-----dhs-dfg---dfghsd-h-gsdh---";
// 	// char a = '-';

// 	// printf("%d\n", word_count(q, a ));
// }
