#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((size_t)start > len)
	{
		if ((temp = malloc(1)) == NULL)
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	if ((temp = ft_calloc((len + 1), sizeof(char))) == NULL)
		return (NULL);
	while (start < (unsigned int)len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	return (temp);
}
