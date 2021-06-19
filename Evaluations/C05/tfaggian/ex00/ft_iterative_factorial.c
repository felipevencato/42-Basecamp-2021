int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	else
		while (nb--)
			r *= (nb + 1);
	return (r);
}
