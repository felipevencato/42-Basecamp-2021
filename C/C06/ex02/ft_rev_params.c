#include <unistd.h>
int	main (int argc, char **argv)
{
	int	j;

	if (argc > 1)
	{
		while (--argc)
		{
			j = 0;
			while (argv[argc][j])
				write (1, &argv[argc][j++], 1);
			write (1, "\n", 1);
		}
	}
	return (0);
}
