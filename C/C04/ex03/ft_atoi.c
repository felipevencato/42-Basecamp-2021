int	ft_atoi(char *str)
{
	int			neg;
	long int	res;
	int			i;

	neg = 1;
	res = 0;
	i = 0;
	while (*str)
	{
		if (*str == '-')
			neg *= -1;
		if (*str >= '0' && *str <= '9')
			break ;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * neg);
}
