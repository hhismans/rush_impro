/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 11:26:43 by hhismans          #+#    #+#             */
/*   Updated: 2014/12/08 11:27:47 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_convert.h"
int		main(int argc, char** argv)
{
	ft_putstr(ft_convert(argv[1], argv[2]));
	return(argc);
}
