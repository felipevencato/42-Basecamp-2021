char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while (src[c] != '\0' && c < nb)
	{
		dest[c + i] = src[c];
		c++;
	}
	dest[c + i] = '\0';
	return (dest);
}
