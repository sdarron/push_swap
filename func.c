/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 04:26:48 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/08 16:13:22 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long int		ft_atoi_max(const char *str)
{
	int				i;
	long long int	min;
	long long int	result;

	i = 0;
	min = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		min = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + (str[i++] - '0');
	return (result *= min);
}

void				allfree(t_data *data)
{
	ft_memdel((void**)&data->modnumbs);
	ft_memdel((void**)&data->anumbs);
	ft_memdel((void**)&data->bnumbs);
	ft_memdel((void**)&data);
}

void				initdata(t_data *data, int len)
{
	if (!(data->anumbs = (long long int *)malloc(sizeof(long long int) *
	(len))))
		return ;
	if (!(data->bnumbs = (long long int *)malloc(sizeof(long long int) * len)))
		return ;
	if (!(data->modnumbs =
		(long long int *)malloc(sizeof(long long int) * len)))
		return ;
	data->lenb = 0;
	data->lena = len;
	data->v = 0;
}

int					noparameters(void)
{
	return (0);
}

int					pursb500(t_data *d, int k, int f)
{
	if (f == 0 && d->lenb > 1 && d->bnumbs[1] == d->modnumbs[k])
	{
		putsb(d);
		f = 1;
	}
	return (f);
}
