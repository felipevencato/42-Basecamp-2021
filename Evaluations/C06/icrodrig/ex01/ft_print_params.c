#include <unistd.h>

int	main(int argc, char **argv)
{	
	int	i;
	int	k;

	i = 0;
	k = 1;
	argc = 0;
	while (argc > k)
	{	
		i = 0;
		while (argv[k][i])
			write(1, &argv[k][i++], 1);
		k++;
		write(1, "\n", 1);
	}
	return (0);
}
