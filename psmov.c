/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmov.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 01:48:29 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/11 19:36:57 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	movlen2(t_data *data, int l)
{
	if (data->anumbs[0] > data->anumbs[1])
	{
		ft_putstr("sa\n");
		ft_movsa(data, l);
	}
}

void	movlen3(t_data *data, int l)
{
	if (data->anumbs[0] > data->anumbs[1] && data->anumbs[2] > data->anumbs[1]
		&& data->anumbs[0] < data->anumbs[2])
		movlen2(data, l);
	if (data->anumbs[0] > data->anumbs[1] && data->anumbs[1] > data->anumbs[2])
	{
		movlen2(data, l);
		ft_putstr("rra\n");
		ft_movrra(data, l);
	}
	if (data->anumbs[0] > data->anumbs[1] && data->anumbs[1] < data->anumbs[2]
		&& data->anumbs[0] > data->anumbs[2])
	{
		ft_putstr("ra\n");
		ft_movra(data, l);
	}
	if (data->anumbs[0] < data->anumbs[1] && data->anumbs[1] > data->anumbs[2]
		&& data->anumbs[0] < data->anumbs[2])
	{
		ft_putstr("sa\n");
		ft_movsa(data, l);
		ft_putstr("ra\n");
		ft_movra(data, l);
	}
	if (data->anumbs[0] < data->anumbs[1] && data->anumbs[1] > data->anumbs[2]
		&& data->anumbs[0] > data->anumbs[2])
	{
		ft_putstr("rra\n");
		ft_movrra(data, l);
	}
}
