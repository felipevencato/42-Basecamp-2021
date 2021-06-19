/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fevencat <fevencat@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 04:26:21 by fevencat          #+#    #+#             */
/*   Updated: 2021/06/16 05:06:28 by fevencat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	funcker(int var, int var1, int var2, int var3)
{
	if (var == 1) return 1;
	if (var == 2) return 2;
	printf("Oi");
}

void	voider(void)
{
	return ;
}

//argv[0] é o nome do binário que executou, Links podem alterar o nome
//O resto do argv são os argumentos
#include <bsd/string.h>

int    main(int argc, char **argv)
{
    char    dest[15];
    char    orig[] = "trucmachin";
    printf("%zu\n", strlcpy(dest, orig, 5));
    printf("%s\n", dest);
    return (0);
}

#include <unistd.h>
void	ft_print_alphabet (void)
{
	char	*alphabet;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	while (*alphabet)
		write(1, alphabet++, 1);
}
#include <unistd.h>
void	ft_print_reverse_alphabet (void)
{
	char	*reverse_alphabet;

	reverse_alphabet = "zyxwvutsrqponmlkjihgfedcba";
	while (*reverse_alphabet)
		write(1, reverse_alphabet++, 1);
}
#include <unistd.h>
void	ft_print_numbers(void)
{
	char	*numbers;

	numbers = "0123456789";
	while (*numbers)
		write(1, numbers++, 1);
}
