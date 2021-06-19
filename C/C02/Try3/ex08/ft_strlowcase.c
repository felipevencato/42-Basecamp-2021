char	*ft_strlowcase(char *str)
{
	char	*p;

	p = str;
	while (*p)
	{
		if (*p >= 'A' && *p <= 'Z')
			*p = *p + 32;
		p++;
	}
	return (str);
}
