void	ft_putchar (char c);

void	print_line (int length, char first, char mid, char last)
{
	ft_putchar (first);
	if (--length)
	{
		while (--length)
			ft_putchar (mid);
		ft_putchar (last);
	}
	ft_putchar ('\n');
}

//y == height;x == width;
void	rush (int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_line (x, 'A', 'B', 'C');
		if (--y)
		{
			while (--y)
				print_line (x, 'B', ' ', 'B');
			print_line (x, 'C', 'B', 'A');
		}
	}
}
