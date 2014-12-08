/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 10:21:12 by hhismans          #+#    #+#             */
/*   Updated: 2014/12/08 12:29:11 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_convert.h"
#include <stdlib.h>

void		ft_itoa_n(int nbr, char *charset, char *ret)
{
	int		base;
	char	tab[2];

	tab[1] = '\0';
	base = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		ret = strcat(ret, "-");
	}
	while (charset[base])
		base++;
	if (nbr >= base)
		ft_itoa_n(nbr / base, charset, ret);
	nbr = nbr % base;
	tab[0] = charset[nbr];
	ft_strcat(ret, tab);
}

int			check_nbr(char *nbr)
{
	int i;

	i = 0;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
		{
			ft_putstr_fd("Erreur, nbr is'nt in base 10", 2);
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
				ft_putstr_fd("Erreur doublon in charset", 2);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

char		*ft_convert(char *nbr, char *charset)
{
	char	*ret;
	int		nbr_int;

	ret = ft_strnew(0);
	if (check(nbr, charset))
	{
		nbr_int = ft_atoi(nbr);
		ft_itoa_n(nbr_int, charset, ret);
		return (ret);
	}
	return (NULL);
}
