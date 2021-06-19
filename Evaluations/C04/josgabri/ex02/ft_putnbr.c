#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_long_negative(void)
{
	write(1, "-2147483648", 11);
}

void	ft_putnbr(int nb)
{
	int		divisor;
	int		bkp;

	divisor = 1000000000;
	if (nb == 0)
		ft_putchar('0');
	else if (nb == -2147483648)
		ft_print_long_negative();
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar('-');
		}
		bkp = nb;
		while (divisor && nb != -1)
		{
			if (divisor < nb || nb % divisor != bkp)
				ft_putchar('0' + nb / divisor);
			nb = nb % divisor;
			divisor = divisor / 10;
		}
	}
}
