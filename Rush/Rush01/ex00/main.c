void	ft_putchar (char c);
void	ft_printf (char *string);
int		size_of_matrix (char *matrix);
int	check_valid_matrix (int size, char *matrix);
int	*char_vector_to_matrix (char *vector);

int	main (int argc, char **argv)
{
	int	**matrix;

	if (argc > 1)
	{
		++argv;
		matrix = char_vector_to_matrix(*argv);
		/*
		if (check_valid_matrix (matrix))
		{
			ft_printf ("Error\n");
			return (1);
		}
		*/
		while (**matrix)
		{
			while (*matrix)
			{
				ft_putchar(*matrix + '0');
				ft_putchar(' ');
				(*matrix)++;
			}
			ft_putchar(' ');
			matrix++;
		}
	}
	return (0);
}
/*
https://www.chiark.greenend.org.uk/~sgtatham/puzzles/js/towers.html?
http://web.cs.ucla.edu/classes/fall19/cs131/hw/hw4.html

"col1up col2up col3up col4up col1down col2down col3down col4down
row1left row2left row3left row4left row1right row2right row3right row4right"

number + '0' cria char
number_char - '0' cria int

print_line(*argv);

ft_putchar (*matrix - '0' + (*(matrix + 4 * 2) - '0') + '0');
ft_putchar (*matrix);
*/