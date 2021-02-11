/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmovhund500_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 00:50:28 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/09 01:25:20 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	movlencont500(t_data *d, int l, int k, int f)
{
	f = pursb500(d, k, f);
	f = allrrb500(d, l, k, f);
	if (f == 0)
		putrb(d, l);
}

void	oneline500(t_data *d, int l, int n)
{
	if (n + 1 < l - 1)
	{
		while (d->anumbs[0] != d->modnumbs[n + 1])
			putra(d, l);
	}
}

int		endallrrb500(t_data *d, int l, int k, int f)
{
	if (d->lenb > 21 && f == 0 && d->bnumbs[d->lenb - 11] == d->modnumbs[k])
		f = whilerrbhund(d, l, 11);
	if (d->lenb > 23 && f == 0 && d->bnumbs[d->lenb - 12] == d->modnumbs[k])
		f = whilerrbhund(d, l, 12);
	if (d->lenb > 25 && f == 0 && d->bnumbs[d->lenb - 13] == d->modnumbs[k])
		f = whilerrbhund(d, l, 13);
	if (d->lenb > 27 && f == 0 && d->bnumbs[d->lenb - 14] == d->modnumbs[k])
		f = whilerrbhund(d, l, 14);
	if (d->lenb > 29 && f == 0 && d->bnumbs[d->lenb - 15] == d->modnumbs[k])
		f = whilerrbhund(d, l, 15);
	if (d->lenb > 31 && f == 0 && d->bnumbs[d->lenb - 16] == d->modnumbs[k])
		f = whilerrbhund(d, l, 16);
	if (d->lenb > 33 && f == 0 && d->bnumbs[d->lenb - 17] == d->modnumbs[k])
		f = whilerrbhund(d, l, 17);
	if (d->lenb > 35 && f == 0 && d->bnumbs[d->lenb - 18] == d->modnumbs[k])
		f = whilerrbhund(d, l, 18);
	if (d->lenb > 37 && f == 0 && d->bnumbs[d->lenb - 19] == d->modnumbs[k])
		f = whilerrbhund(d, l, 19);
	if (d->lenb > 39 && f == 0 && d->bnumbs[d->lenb - 20] == d->modnumbs[k])
		f = whilerrbhund(d, l, 20);
	return (f);
}

int		endallrrb5001(t_data *d, int l, int k, int f)
{
	if (d->lenb > 41 && f == 0 && d->bnumbs[d->lenb - 21] == d->modnumbs[k])
		f = whilerrbhund(d, l, 21);
	if (d->lenb > 43 && f == 0 && d->bnumbs[d->lenb - 22] == d->modnumbs[k])
		f = whilerrbhund(d, l, 22);
	if (d->lenb > 45 && f == 0 && d->bnumbs[d->lenb - 23] == d->modnumbs[k])
		f = whilerrbhund(d, l, 23);
	if (d->lenb > 47 && f == 0 && d->bnumbs[d->lenb - 24] == d->modnumbs[k])
		f = whilerrbhund(d, l, 24);
	if (d->lenb > 49 && f == 0 && d->bnumbs[d->lenb - 25] == d->modnumbs[k])
		f = whilerrbhund(d, l, 25);
	return (f);
}

int		allrrb500(t_data *d, int l, int k, int f)
{
	f = endallrrb(d, l, k, f);
	f = endallrrb500(d, l, k, f);
	f = endallrrb5001(d, l, k, f);
	return (f);
}
