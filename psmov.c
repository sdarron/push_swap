/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmov.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 01:48:29 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/24 00:22:29 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initdata5(t_data *data, t_data5 *data5)
{
	data5->min1 = data->anumbs[0];
	data5->min2 = data->anumbs[0];
	data5->n1 = 0;
	data5->n2 = 0;
}

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
		putrra(data, l);
	}
	if (data->anumbs[0] > data->anumbs[1] && data->anumbs[1] < data->anumbs[2]
		&& data->anumbs[0] > data->anumbs[2])
		putra(data, l);
	if (data->anumbs[0] < data->anumbs[1] && data->anumbs[1] > data->anumbs[2]
		&& data->anumbs[0] < data->anumbs[2])
	{
		ft_putstr("sa\n");
		ft_movsa(data, l);
		putra(data, l);
	}
	if (data->anumbs[0] < data->anumbs[1] && data->anumbs[1] > data->anumbs[2]
		&& data->anumbs[0] > data->anumbs[2])
		putrra(data, l);
}
