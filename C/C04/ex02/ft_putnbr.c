#include <unistd.h>
#define INT_MIN -2147483648
void	print_digit (int c)
{
	c += '0';
	write (1, &c, 1);
}

int	print_int (int nb)
{
	if (nb < 10)
		return (nb);
	print_digit(print_int(nb / 10));
	return (nb % 10);
}

void	ft_putnbr (int nb)
{
	if (nb == INT_MIN)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	print_digit(print_int (nb));
}
