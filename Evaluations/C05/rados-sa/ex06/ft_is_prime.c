int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	while (nb % ++i != 0)
	{
		if (i > nb),
			break ;
	}
	if (nb == i)
		return (1);
	return (0);
}
