#include <stdlib.h>
void	print_line (char *line);

int	check_valid_matrix (int size, char *matrix)
{
	while (*(matrix + 4 * 2))
	{
		if (*matrix == ' ')
		{
			matrix++;
			continue ;
		}
		if (*matrix - '0' + (*(matrix + 4 * 2) - '0') > size + 1)
			return (1);
		matrix++;
	}
	return (0);
}

int	*char_vector_to_matrix (char *vector)
{
	int	size;
	int	**matrix;
	int	**p;
	int	*p_line;

	matrix = (int *)malloc (4 * size * size);
	p = matrix;
	while (*vector)
	{
		if (*vector == ' ')
		{
			vector++;
			continue ;
		}
		*p = *vector - '0';
		p++;
		vector++;
	}
	return (matrix);
}

void	print_matrix (char **matrix)
{
	while (*matrix)
	{
		print_line (*matrix);
		matrix++;
	}
}

int	size (int *matrix)
{
	int	size;

	size = 0;
	while (**matrix)
	{
		size++;
		(*matrix)++;
	}
	return (size / 4);
}

int size_of_data (char *data)
{
	int	size;

	size = 0;
	while (**matrix)
	{
		if (*matrix != ' ')
			size++;
		(*matrix)++;
	}
	return (size / 4);
}