/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmov1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 01:31:46 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/09 03:09:35 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		endmovlen5(t_data *data, int l)
{
	movlen3(data, l);
	if (data->lenb > 1 && data->bnumbs[0] < data->bnumbs[1] && l == 5)
		putsb(data);
	if (l == 5)
		putpa(data, l);
	putpa(data, l);
}

void		min1max(t_data *data, t_data5 *data5)
{
	int		i;

	i = 0;
	while (i < data->lena)
	{
		if (data->anumbs[i] < data5->min1)
		{
			data5->min1 = data->anumbs[i];
			data5->n1 = i;
		}
		i++;
	}
	i = 0;
	while (i < data->lena)
	{
		if (data->anumbs[i] > data5->min2)
			data5->min2 = data->anumbs[i];
		i++;
	}
}

void		min2(t_data *data, t_data5 *data5)
{
	int		i;

	i = 0;
	while (i < data->lena)
	{
		if (data->anumbs[i] > data5->min1 && data->anumbs[i] < data5->min2)
		{
			data5->min2 = data->anumbs[i];
			data5->n2 = i;
		}
		i++;
	}
}

void		movlenonly5(t_data *data, t_data5 *data5, int l)
{
	if (data5->n2 < data5->n1)
	{
		while (data->anumbs[0] != data5->min2)
			putra(data, l);
		putpb(data, l);
		while (data->anumbs[0] != data5->min1)
			putra(data, l);
		putpb(data, l);
	}
	if (data5->n2 > data5->n1)
	{
		while (data->anumbs[0] != data5->min2)
			putra(data, l);
		putpb(data, l);
	}
}

void		movlen5(t_data *data, int l)
{
	t_data5	*data5;

	if (!(data5 = (t_data5*)malloc(sizeof(t_data5))))
		return ;
	initdata5(data, data5);
	min1max(data, data5);
	min2(data, data5);
	if (data5->n1 < data5->n2 || l == 4)
	{
		while (data->anumbs[0] != data5->min1)
			putra(data, l);
		putpb(data, l);
	}
	if (l == 5)
		movlenonly5(data, data5, l);
	endmovlen5(data, l);
	free(data5);
	data5 = NULL;
}
