/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 04:26:48 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/16 03:13:33 by sdarron          ###   ########.fr       */
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
	free(data->anumbs);
	free(data->bnumbs);
	data->modnumbs = 0;
	free(data->modnumbs);
	free(data);
}

void				initdata(t_data *data, int len)
{
	if (!(data->anumbs = (long long int *)malloc(sizeof(long long int) *
	(len))))
		return ;
	ft_bzero(data->anumbs, len);
	if (!(data->bnumbs = (int *)malloc(sizeof(int) * len)))
		return ;
	ft_bzero(data->bnumbs, len);
	data->lenb = 0;
	data->lena = len;
}

int					noparameters(void)
{
	//ft_putstr("Please, enter parameters!\n");
	return (0);
}
