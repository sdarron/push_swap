/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmovhund500.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 02:01:17 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/09 03:08:04 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	puttob499(t_data *data, int n, int l, int pat)
{
	int bearing;
	int bearing1;

	bearing = data->modnumbs[n];
	bearing1 = data->modnumbs[n - (pat - 1)];
	while (1)
	{
		if (data->anumbs[0] <= bearing && data->anumbs[0] >= bearing1)
			putpb(data, l);
		else
			putra(data, l);
		if (data->lenb == pat)
			break ;
	}
}

void	edvans(t_data *d, int l, int k)
{
	if (d->lenb > 0 && d->bnumbs[d->lenb - 1] == d->modnumbs[k])
		putrrb(d, l);
	else if (d->lenb > 1 && d->bnumbs[d->lenb - 2] == d->modnumbs[k])
		doublputrrb(d, l);
	else
		putrb(d, l);
}

void	putdel499(t_data *data, int l, int del)
{
	puttobdel499(data, l, del);
	puttoadel499(data, l);
}

void	movlen499(t_data *data, int l)
{
	int	n;
	int	k;
	int	del;
	int	pat;

	pat = l / 10;
	del = l % pat;
	n = l - 1 - del;
	k = l - 1 - del;
	if (del > 0)
		putdel499(data, l, del);
	while (n >= 0)
	{
		puttob499(data, n, l, pat);
		while (data->lenb)
		{
			if (data->bnumbs[0] == data->modnumbs[k])
			{
				putpa(data, l);
				k--;
			}
			edvans(data, l, k);
		}
		n = n - pat;
	}
}

void	movlen500(t_data *d, int l)
{
	int n;
	int k;
	int f;

	f = 0;
	n = l - 1;
	k = l - 1;
	while (n >= 0)
	{
		puttob500(d, l, n);
		oneline500(d, l, n);
		while (d->lenb)
		{
			f = 0;
			if (d->bnumbs[0] == d->modnumbs[k])
			{
				putpa(d, l);
				k--;
				f = 1;
			}
			movlencont500(d, l, k, f);
		}
		n = n - 50;
	}
}
