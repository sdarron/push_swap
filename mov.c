/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 03:01:29 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/16 02:55:51 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_movsa(t_data *data, int l)
{
	int	a;

	if (l > 1)
	{
		a = (int)data->anumbs[0];
		data->anumbs[0] = data->anumbs[1];
		data->anumbs[1] = a;
	}
}

void	ft_movsb(t_data *data)
{
	int	a;

	if (data->lenb > 1)
	{
		a = (int)data->bnumbs[0];
		data->bnumbs[0] = data->bnumbs[1];
		data->bnumbs[1] = a;
	}
	else
		data->lenb = -300;
}

void	ft_movss(t_data *data, int l)
{
	ft_movsa(data, l);
	ft_movsb(data);
}

void	ft_movpa(t_data *data, int l)
{
	int	i;

	l = data->lenb;
	if (data->lenb > 0)
	{
		data->lena++;
		i = data->lena;
		while (i > 0)
		{
			data->anumbs[i - 1] = data->anumbs[i - 2];
			i--;
		}
		data->anumbs[0] = data->bnumbs[0];
		i = 0;
		while (i < l - 1)
		{
			data->bnumbs[i] = data->bnumbs[i + 1];
			i++;
		}
		data->lenb--;
	}
}

void	ft_movpb(t_data *data, int l)
{
	int	i;
	int	a;
	int len;

	len = data->lena;
	i = 0;
	a = data->anumbs[0];
	if (len > 0)
	{
		while (i < len - 1)
		{
			data->anumbs[i] = data->anumbs[i + 1];
			i++;
		}
		i = l + 1;
		while (i)
		{
			data->bnumbs[i - 1] = data->bnumbs[i - 2];
			i--;
		}
		data->bnumbs[0] = a;
		data->lenb++;
		data->lena--;
	}
}
