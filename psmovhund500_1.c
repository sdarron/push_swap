/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmovhund500_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 23:30:51 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/06 22:03:20 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	puttobdel499(t_data *data, int l, int del)
{
	int	bearing;
	int bearing1;

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

void	puttoadel499(t_data *data, int l)
{
	int kd;

	kd = l - 1;
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

void	puttobcont500(t_data *d, int l, int n, int k)
{
	int	bearing;
	int	bearing1;

	bearing = d->modnumbs[n];
	bearing1 = d->modnumbs[n - 49];
	if (d->anumbs[0] <= bearing && d->anumbs[0] >= bearing1)
		putpb(d, l);
	else if (d->anumbs[1] <= bearing && d->anumbs[1] >= bearing1)
		putsa(d, l);
	else if (k == 1)
		while (!(d->anumbs[0] <= bearing && d->anumbs[0] >= bearing1))
			putrra(d, l);
	else
		putra(d, l);
}

void	puttob500(t_data *d, int l, int n)
{
	int	bearing;
	int	bearing1;
	int k;
	int i;

	bearing = d->modnumbs[n];
	bearing1 = d->modnumbs[n - 49];
	while (1)
	{
		k = 0;
		i = d->lena - 1;
		while (i > d->lena / 2 + 1)
		{
			if (d->anumbs[i] <= bearing && d->anumbs[i] >= bearing1)
			{
				k = 1;
				break ;
			}
			--i;
		}
		puttobcont500(d, l, n, k);
		if (d->lenb == 50)
			break ;
	}
}

void	whilerrb(t_data *d, int l, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		putrrb(d, l);
		i++;
	}
}
