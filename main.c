/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fevencat <fevencat@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 04:26:21 by fevencat          #+#    #+#             */
/*   Updated: 2021/05/31 16:30:39 by fevencat         ###   ########.fr       */
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
int	main(int	argc, char	**argv)
{
	int	i;
	int	*oi;

	printf("Executavel: %s\n", argv[0]);
	printf("Argumentos: ");
	i = 1;
	while (argv[i] != NULL)
	{
		printf ("%s ", argv[i]);
		i++;
	}
	i = 1 + 1;
	printf ("\n");
}
