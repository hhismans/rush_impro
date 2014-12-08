/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 11:26:43 by hhismans          #+#    #+#             */
/*   Updated: 2014/12/08 12:36:25 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_convert.h"

int		main(int argc, char **argv)
{
	char *ret;

	if (argc == 4)
	{
		ret = ft_convert(argv[1], argv[2], argv[3]);
		if (ret)
			ft_putstr(ret);
		else
			ft_putendl_fd("Il y a eu des erreurs !", 2);
	}
	return (0);
}
