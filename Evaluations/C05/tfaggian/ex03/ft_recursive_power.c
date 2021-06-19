int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	else
		nb *= ft_recursive_power(nb, --power);
	return (nb);
}
