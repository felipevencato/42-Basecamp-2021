void	rush (int x, int y);
void	ft_putchar(char c);

void	run_test (void)
{
	ft_putchar('\n');
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
}

int	main (int argc, char **argv)
{
	run_test ();
	return (0 + argc + argv[0][0]);
}
