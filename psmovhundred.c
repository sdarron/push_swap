/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmovhundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 13:17:44 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/09 03:10:20 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorttoten(t_data *data, int l, int n, int k)
{
	puttob(data, l, n);
	while (data->anumbs[0] != data->modnumbs[n + 1])
		putra(data, l);
	while (data->lenb)
	{
		if (data->bnumbs[0] == data->modnumbs[k])
		{
			putpa(data, l);
			k--;
		}
		else
			putrb(data, l);
	}
}

void	puttobandline(t_data *data, int l, int n)
{
	puttob(data, l, n);
	while (data->anumbs[0] != data->modnumbs[n + 1])
		putra(data, l);
}

void	movlen99(t_data *data, int l)
{
	int n;
	int k;
	int del;
	int kd;

	del = l % 20;
	n = l - 1 - del;
	k = l - 1 - del;
	kd = l - 1;
	puttoadel(data, l, kd);
	while (n >= 0)
	{
		puttobandline(data, l, n);
		while (data->lenb)
		{
			if (data->bnumbs[0] == data->modnumbs[k])
			{
				putpa(data, l);
				k--;
			}
			else
				putrb(data, l);
		}
		n = n - 20;
	}
}

void	puttob(t_data *data, int l, int n)
{
	int	bearing;
	int	bearing1;
	int i;
	int k;

	bearing = data->modnumbs[n];
	bearing1 = data->modnumbs[n - 19];
	while (1)
	{
		k = 0;
		i = data->lena - 1;
		while (i > data->lena / 2 + 1)
		{
			if (data->anumbs[i] <= bearing && data->anumbs[i] >= bearing1)
			{
				k = 1;
				break ;
			}
			--i;
		}
		puttobcont(data, l, n, k);
		if (data->lenb == 20)
			break ;
	}
}

void	movlen100(t_data *d, int l)
{
	int	n;
	int	k;

	n = l - 1;
	k = l - 1;
	while (n >= 0)
	{
		puttob(d, l, n);
		oneline(d, l, n);
		while (d->lenb)
		{
			k = allrrb(d, l, k);
		}
		n = n - 20;
	}
}
