#include <unistd.h>
void	ft_print (char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main (int argc, char **argv)
{
	int		i;
	char	*aux;

	if (argc > 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp (argv[i], argv[i + 1]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = aux;
				i = 0;
			}
			i++;
		}
		i = 1;
		while (i < argc)
		{
			ft_print (argv[i]);
			i++;
		}
	}
	return (0);
}
