#include <unistd.h>

void	ft_putstr (char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main (int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc && i > 0)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
