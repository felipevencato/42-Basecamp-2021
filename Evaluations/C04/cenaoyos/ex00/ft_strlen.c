int	ft_strlen(char *str)
{
	int	count_str;

	count_str = 0;
	while (str[count_str])
		count_str++;
	return (count_str);
}
