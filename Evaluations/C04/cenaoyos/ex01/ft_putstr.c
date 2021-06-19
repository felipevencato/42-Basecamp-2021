#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	count_str;

	count_str = 0;
	while (str[count_str] != '\0')
	{
		ft_putchar(str[count_str]);
		count_str++;
	}
}
