int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= 0 && *str <= 31)
			return (0);
		str++;
	}
	return (1);
}
