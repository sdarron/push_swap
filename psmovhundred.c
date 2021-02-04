/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmovhundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 02:57:42 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/16 03:36:28 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void movlen1002(t_data *data, int l)
{
	int i;
	int min;

	min = data->anumbs[0];
	i = 0;
	while (data->lena > 1)
	{
		while (i < data->lena)
		{
			if (data->anumbs[i] < min)
				min = data->anumbs[i];
			i++;
		}
		i = 0;
		if (data->anumbs[l - 1] == min)
			putrra(data, l);
		while (data->anumbs[0] != min)
			putra(data, l);
		putpb (data, l);
		min = data->anumbs[0];
	}
	while (data->lenb > 0)
		putpa(data, l);
}

void	movlen1001(t_data *data, int l)
{
	int i;
	int min;
	int max;

	min = data->anumbs[0];
	max = data->anumbs[0];
	i = 0;
	while (data->lena > 1)
	{
		while (i < data->lena)
		{
			if (data->anumbs[i] < min)
				min = data->anumbs[i];
			i++;
		}
		i = 0;
		while (i < data->lena)
		{
			if (data->anumbs[i] > max)
				max = data->anumbs[i];
			i++;
		}
		i = 0;		
		while (data->anumbs[data->lena - 1] != min)
			putrra(data, l);
		putrra(data, l);
		putpb (data, l);
		while (data->anumbs[0] != max)
			putra(data, l);
		putpb (data, l);
		min = data->anumbs[0];
		max = data->anumbs[0];
	}
	while (data->lenb > 0)
	{
		if (i % 2)
			putra(data, l);
		putpa(data, l);
		i++;
	}
}


void	movlen100(t_data *data, int n, int l)
{
	// int	i;
	 int	j;
	// int	y;
	int	sup;
	l = data->lena;
	// i = n;
	 j = data->lena;
	sup = data->anumbs[(n + l) / 2];
	while (j + 1)
	{
		if (data->anumbs[0] >= sup)
			putpb (data, l);
		putra(data, l);
		j--;
	}

	  	//movlen100(data, n, data->lena - 1);
	// if (l > i)
	// 	movlen100(data, i, l);
}
