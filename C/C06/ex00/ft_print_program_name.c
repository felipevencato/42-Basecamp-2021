#include <unistd.h>
int	main (int argc, char **argv)
{
	(void)argc;
	while (**argv)
		write (1, (*argv)++, 1);
	write (1, "\n", 1);
	return (0);
}
