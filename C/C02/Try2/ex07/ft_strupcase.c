char	*ft_strupcase(char *str)
{
	char	*p;

	p = str;
	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p = *p - 32;
		p++;
	}
	return (str);
}
