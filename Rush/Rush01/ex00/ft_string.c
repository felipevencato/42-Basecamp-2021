#include <unistd.h>
void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_printf (char *string)
{
	while (*string)
	{
		ft_putchar (*string);
		string++;
	}
}

void	print_line (char *line)
{
	ft_printf (line);
	ft_putchar ('\n');
}