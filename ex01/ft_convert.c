/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 10:21:12 by hhismans          #+#    #+#             */
/*   Updated: 2014/12/08 12:44:01 by hhismans         ###   ########.fr       */
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
	ft_strcat(ret, tab); //Attention a changer
}

int			power(int nbr, int base, int power)
{
	int i;

	i = 0;
	while (i < power)
	{
		nbr *= base;
		i++;
	}
	return (nbr);
}

int			ft_atoi_n(char *nbr, char *charset)
{
	int ret;
	int i;
	int len_nbr;
	int base;
	int current_chiffre;

	len_nbr = ft_strlen(nbr);
	base = ft_strlen(charset);
	ret = 0;
	i = 0;
	while (nbr[i])
	{
		current_chiffre = 0;
		while (nbr[i] != charset[current_chiffre])
			current_chiffre++;
		ret += power(current_chiffre, base, len_nbr - i - 1);
		i++;
	}
	return (ret);
}

char		*ft_convert(char *nbr, char *charset1, char *charset)
{
	char	*ret;
	int		nbr_int;

	ret = ft_strnew(0); // verfier qu'on ne recoit pas null
	if (!check(nbr, charset1))
		return (NULL);
	if (check(nbr, charset))
	{
		if (check_atoi(nbr, charset1))
			nbr_int = ft_atoi_n(nbr, charset1);
		else
			return (NULL);
		ft_itoa_n(nbr_int, charset, ret);
		return (ret);
	}
	return (NULL);
}
