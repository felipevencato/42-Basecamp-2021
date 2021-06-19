int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	num = 0;
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		num = num * 10;
		num += str[i] - 48;
		i++;
	}
	return (num * neg);
}
