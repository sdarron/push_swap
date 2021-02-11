/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmovhundred2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 22:16:21 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/08 16:09:54 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	puttobcont(t_data *data, int l, int n, int k)
{
	int	bearing;
	int	bearing1;

	bearing = data->modnumbs[n];
	bearing1 = data->modnumbs[n - 19];
	if (data->anumbs[0] <= bearing && data->anumbs[0] >= bearing1)
		putpb(data, l);
	else if (data->anumbs[1] <= bearing && data->anumbs[1] >= bearing1)
		putsa(data, l);
	else if (k == 1)
		while (!(data->anumbs[0] <= bearing && data->anumbs[0] >= bearing1))
			putrra(data, l);
	else
		putra(data, l);
}

void	oneline(t_data *d, int l, int n)
{
	if (n + 1 < l - 1)
	{
		while (d->anumbs[0] != d->modnumbs[n + 1])
			putra(d, l);
	}
}

int		whilerrbhund(t_data *d, int l, int i)
{
	while (i)
	{
		putrrb(d, l);
		i--;
	}
	return (1);
}

int		endallrrb(t_data *d, int l, int k, int f)
{
	if (d->lenb > 2 && f == 0 && d->bnumbs[d->lenb - 1] == d->modnumbs[k])
		f = whilerrbhund(d, l, 1);
	if (d->lenb > 3 && f == 0 && d->bnumbs[d->lenb - 2] == d->modnumbs[k])
		f = whilerrbhund(d, l, 2);
	if (d->lenb > 5 && f == 0 && d->bnumbs[d->lenb - 3] == d->modnumbs[k])
		f = whilerrbhund(d, l, 3);
	if (d->lenb > 7 && f == 0 && d->bnumbs[d->lenb - 4] == d->modnumbs[k])
		f = whilerrbhund(d, l, 4);
	if (d->lenb > 9 && f == 0 && d->bnumbs[d->lenb - 5] == d->modnumbs[k])
		f = whilerrbhund(d, l, 5);
	if (d->lenb > 11 && f == 0 && d->bnumbs[d->lenb - 6] == d->modnumbs[k])
		f = whilerrbhund(d, l, 6);
	if (d->lenb > 13 && f == 0 && d->bnumbs[d->lenb - 7] == d->modnumbs[k])
		f = whilerrbhund(d, l, 7);
	if (d->lenb > 15 && f == 0 && d->bnumbs[d->lenb - 8] == d->modnumbs[k])
		f = whilerrbhund(d, l, 8);
	if (d->lenb > 17 && f == 0 && d->bnumbs[d->lenb - 9] == d->modnumbs[k])
		f = whilerrbhund(d, l, 9);
	if (d->lenb > 19 && f == 0 && d->bnumbs[d->lenb - 10] == d->modnumbs[k])
		f = whilerrbhund(d, l, 10);
	return (f);
}

int		allrrb(t_data *d, int l, int k)
{
	int f;
	int i;

	i = 1;
	f = 0;
	if (d->lenb > 0 && d->bnumbs[0] == d->modnumbs[k])
	{
		putpa(d, l);
		k--;
		f = 1;
	}
	if (d->lenb > 1 && d->bnumbs[1] == d->modnumbs[k] && f == 0)
	{
		putsb(d);
		f = 1;
	}
	f = endallrrb(d, l, k, f);
	if (f == 0)
		putrb(d, l);
	return (k);
}
