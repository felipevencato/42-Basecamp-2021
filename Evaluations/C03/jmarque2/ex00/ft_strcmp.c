/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fevencat <fevencat@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 04:07:29 by jmarque2          #+#    #+#             */
/*   Updated: 2021/06/18 05:28:00 by fevencat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	j = 0;
	while ((s1[i] != '\0') || (s2[j] != '\0'))
	{
		if (s1[i] != s2[j] && i == j)
			return ((s1[i] - '0') - (s2[j] - '0'));
		if (i != j)
			return (i - j);
		i++;
		j++;
	}
	return (i - j);
}
