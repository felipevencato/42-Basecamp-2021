char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	i;

	c = 0;
	if (to_find[c] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		i = 0;
		while (str[c + i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return (&str[c]);
			i++;
		}
		c++;
	}
	return (0);
}
