int	ft_iterative_power(int nb, int power)
{
	int	nbr;

	nbr = 1;
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	else
		while (power--)
			nbr *= nb;
	return (nbr);
}
