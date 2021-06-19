char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		first;

	ptr = str;
	first = 1;
	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'z') && first == 1)
		{
			*ptr -= 32;
			first = 0;
		}
		else if ((*ptr >= 'a' && *ptr <= 'z') && first == 0)
			first = 0;
		else if ((*ptr >= 'A' && *ptr <= 'Z') && first == 1)
			first = 0;
		else if ((*ptr >= 'A' && *ptr <= 'Z') && first == 0)
			*ptr += 32;
		else if (*ptr >= '0' && *ptr <= '9')
			first = 0;
		else
			first = 1;
		ptr++;
	}
	return (str);
}
