char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				count_dest;
	unsigned int	count_src;

	count_dest = 0;
	count_src = 0;
	while (dest[count_dest] != '\0')
		count_dest++;
	while (src[count_src] != '\0' && (count_src < nb))
	{
		dest[count_dest + count_src] = src[count_src];
		count_src++;
	}
	dest[count_dest + count_src] = '\0';
	return (dest);
}
