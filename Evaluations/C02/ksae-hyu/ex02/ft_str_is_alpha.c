int	ft_str_is_alpha(char *str)
{
	int	is_alphabet;

	while (*str)
	{
		is_alphabet = 0;
		if (*str >= 'a' && *str <= 'z')
			is_alphabet = 1;
		if (*str >= 'A' && *str <= 'Z')
			is_alphabet = 1;
		if (is_alphabet == 0)
			return (0);
		str++;
	}
	return (1);
}
