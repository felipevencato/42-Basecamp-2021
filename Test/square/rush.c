void	ft_putchar (char c);

void	rush (int x, int y)
{
	int	i;

	i = (x * y) + 1;
	while (i--)
	{
		if (i == 0 || (i == (x * y) - 1))
			ft_putchar('A');
		if ((i > 0 && i < x - 1) || ((i > (x * y) - x) && (i !=  (x * y) - 1)))
			ft_putchar('B');
		if (i == x - 1 || i == (x * y) - x)
			ft_putchar('C');
		//if (i > x + 2)
		//	ft_putchar(' ');
		if (i == 0 || i % x == 0 && i / x > 0)
			ft_putchar('\n');
	}
}
//tratar casos para 0, -1, max int, max float positivos e negativos