#include <unistd.h>

void	ft_putstr (char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*ione;
	unsigned char	*itwo;

	ione = (unsigned char *)s1;
	itwo = (unsigned char *)s2;
	while ((*ione == *itwo) && *ione)
	{
		ione++;
		itwo++;
	}
	return (*ione - *itwo);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*swap;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
