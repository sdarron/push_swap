/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmov2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 06:42:34 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/08 06:43:50 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void putpb(t_data *data, int l)
{
	ft_putstr("pb\n");
	ft_movpb(data, l);
}

void putpa(t_data *data, int l)
{
	ft_putstr("pa\n");
	ft_movpa(data, l);
}

void putra(t_data *data, int l)
{
	ft_putstr("ra\n");
	ft_movra(data, l);
}

void putrra(t_data *data, int l)
{
	ft_putstr("rra\n");
	ft_movrra(data, l);
}
