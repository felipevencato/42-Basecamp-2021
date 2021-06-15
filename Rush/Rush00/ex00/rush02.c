#define TOP_LEFT_CHAR 'A'
#define TOP_MID_CHAR 'B'
#define TOP_RIGHT_CHAR 'A'
#define MID_LEFT_CHAR 'B'
#define MID_MID_CHAR ' '
#define MID_RIGHT_CHAR 'B'
#define BOT_LEFT_CHAR 'C'
#define BOT_MID_CHAR 'B'
#define BOT_RIGHT_CHAR 'C'
void	ft_putchar (char c);

void	print_line (int length, char first, char mid, char last)
{
	int	col_count;

	ft_putchar (first);
	if (length > 1)
	{
		col_count = 1;
		while (col_count++ < length - 1)
			ft_putchar (mid);
		ft_putchar (last);
	}
	ft_putchar ('\n');
}

//y == height;x == width;
void	rush (int x, int y)
{
	int	count_line;

	if (x != 0 || y != 0)
	{
		print_line (x, TOP_LEFT_CHAR, TOP_MID_CHAR, TOP_RIGHT_CHAR);
		if (y > 2)
		{
			count_line = 0;
			while (count_line++ < y - 2)
				print_line (x, MID_LEFT_CHAR, MID_MID_CHAR, MID_RIGHT_CHAR);
		}
		if (y > 1)
			print_line (x, BOT_LEFT_CHAR, BOT_MID_CHAR, BOT_RIGHT_CHAR);
	}
}
