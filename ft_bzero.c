void ft_bzero(void *s, size_t n)
{
	char *i;

	i = s;
	while (n)
	{
		*i = 0;
		i++;
		n--;
	}
}