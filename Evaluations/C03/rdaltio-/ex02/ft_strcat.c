char	*ft_strcat(char *dest, char *src)
{
	int	count_dest;
	int	count_src;

	count_dest = 0;
	count_src = 0;
	while (dest[count_dest] != '\0')
		count_dest++;
	while (src[count_src] != '\0')
	{
		dest[count_dest + count_src] = src[count_src];
		count_src++;
	}
	dest[count_dest + count_src] = '\0';
	return (dest);
}
