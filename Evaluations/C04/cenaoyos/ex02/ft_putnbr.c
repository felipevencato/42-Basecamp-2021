#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	number[10];
	int		counter;

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0 && nb != -2147483648)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	counter = 0;
	while (nb > 0 && nb != -2147483648)
	{
		number[counter] = (nb % 10) + '0';
		nb = nb / 10;
		counter++;
	}
	while (counter >= 0 && nb != -2147483648)
	{
		ft_putchar(number[counter]);
		counter--;
	}
}
