/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   model.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 03:05:08 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/03 02:29:46 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long int		*ft_model(int l, t_data *data)
{
	int	i;

	i = 0;
	while (i < l)
	{
		data->modnumbs[i] = data->anumbs[i];
		i++;
	}
	ft_quicksort(data->modnumbs, 0, l - 1);
	return (data->modnumbs);
}
