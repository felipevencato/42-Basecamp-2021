#include <stdio.h>
#include <stdlib.h>

void	run_ex (int option)
{
	printf("EX%d\n", option);
	switch (option)
	{
		case 0:
		{
			break;
		}
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
		run_ex (**(++argv) - '0');
	return (0);
}
