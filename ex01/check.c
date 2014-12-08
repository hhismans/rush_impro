/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 12:13:45 by hhismans          #+#    #+#             */
/*   Updated: 2014/12/08 12:27:49 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_convert.h"
#include "libft.h"

int			check_nbr(char *nbr)
{
	int i;

	i = 0;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
		{
			ft_putendl_fd("Erreur, nbr is'nt in base 10", 2);
			return (0);
		}
		i++;
	}
	return (1);
}

int			check(char *nbr, char *charset)
{
	int i;
	int j;

	if (!check_nbr(nbr))
		return (0);
	i = 0;
	while (charset[i])
	{
		j = i + 1;
		while (charset[j])
		{
			if (charset[j] == charset[i])
			{
				ft_putendl_fd("Erreur doublon in charset", 2);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int			check_atoi(char *nbr, char *charset)
{
	int j;
	int i;

	i = 0;
	while (nbr[i])
	{
		j = 0;
		while (charset[j])
		{
			if (charset[j] == nbr[i])
				break ;
			if (charset[j] != nbr[i] && charset[j + 1] == '\0')
			{
				ft_putendl_fd("Error Nb element not found in charset", 2);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
