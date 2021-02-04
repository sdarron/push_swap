/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 22:12:27 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/04 02:26:44 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_movra(t_data *data, int l)
{
	int a;
	int i;

	l = data->lena;
	i = 0;
	if (l > 1)
	{
		a = (int)data->anumbs[0];
		while (i < l - 1)
		{
			data->anumbs[i] = data->anumbs[i + 1];
			i++;
		}
		data->anumbs[l - 1] = a;
	}
}

void	ft_movrb(t_data *data, int l)
{
	int a;
	int i;

	i = 0;
	l = data->lenb;
	if (l > 1)
	{
		a = (int)data->bnumbs[0];
		while (i < l - 1)
		{
			data->bnumbs[i] = data->bnumbs[i + 1];
			i++;
		}
		data->bnumbs[l - 1] = a;
	}
}

void	ft_movrr(t_data *data, int l)
{
	ft_movrb(data, l);
	ft_movra(data, l);
}

void	ft_movrra(t_data *data, int l)
{
	int a;
	int i;

	l = data->lena;
	i = l;
	a = data->anumbs[l - 1];
	while (i)
	{
		data->anumbs[i - 1] = data->anumbs[i - 2];
		i--;
	}
	data->anumbs[0] = a;
}

void	ft_movrrb(t_data *data, int l)
{
	int a;
	int i;

	l = data->lenb;
	i = l;
	a = data->bnumbs[l - 1];
	while (i)
	{
		data->bnumbs[i - 1] = data->bnumbs[i - 2];
		i--;
	}
	data->bnumbs[0] = a;
}
