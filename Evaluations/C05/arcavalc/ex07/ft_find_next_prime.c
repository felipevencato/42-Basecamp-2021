int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(++nb))
			return (nb);
	}
}

int main (void)
{
	printf ("%i",ft_find_next_prime(12));
}