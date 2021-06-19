int	ft_atoi(char *str)
{
	int	number;
	int	pos_neg;

	number = 0;
	pos_neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			pos_neg = pos_neg * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number = number + *str - '0';
		str++;
	}
	return (number * pos_neg);
}
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	printf("%i",ft_atoi("--+1234ab567"));
}