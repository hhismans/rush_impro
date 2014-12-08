/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 11:25:59 by hhismans          #+#    #+#             */
/*   Updated: 2014/12/08 12:15:40 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void		ft_itoa_n(int nbr, char *charset, char* ret);
char		*ft_convert(char *nbr, char *charset1, char *charset);
int			check_nbr(char *nbr);
int			check(char *nbr, char *charset);
int			check_atoi(char *nbr, char *charset);
int			ft_atoi_n(char *nbr, char *charset);
