/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmovhundred1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 19:59:16 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/09 03:10:45 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	puttoddel(t_data *data, int l, int del)
{
	int	bearing;
	int	bearing1;

	bearing = data->modnumbs[l - 1];
	bearing1 = data->modnumbs[l - del];
	while (1)
	{
		if (data->anumbs[0] <= bearing && data->anumbs[0] >= bearing1)
			putpb(data, l);
		else
			putra(data, l);
		if (data->lenb == del)
			break ;
	}
}

void	puttoadel(t_data *data, int l, int kd)
{
	int del;

	del = l % 20;
	puttoddel(data, l, del);
	while (data->lenb)
	{
		if (data->bnumbs[0] == data->modnumbs[kd])
		{
			putpa(data, l);
			kd--;
		}
		else
			putrb(data, l);
	}
}

void	movlen10(t_data *d, int l)
{
	int	k;

	k = l - 1;
	while (d->lena)
		putpb(d, l);
	while (d->lenb)
	{
		if (d->bnumbs[0] == d->modnumbs[k])
		{
			putpa(d, l);
			k--;
		}
		else
			putrb(d, l);
	}
}
