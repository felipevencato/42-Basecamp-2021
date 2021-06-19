int	ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	size;

	index = 0;
	size = ft_strlen(dest);
	while (src[index] != '\0')
	{
		dest[size] = src[index];
		index++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
