#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 0;
	k = argc;
	while (--k)
	{	
		i = 0;
		while (argv[k][i])
			write(1, &argv[k][i++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
