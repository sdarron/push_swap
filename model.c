/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   model.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 03:05:08 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/02 22:23:54 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*ft_model(int l, long long int *numbs)
{
	int	*numbs1;
	int	i;

	i = 0;
	numbs1 = (int*)malloc(sizeof(int) * l);
	while (i < l)
	{
		numbs1[i] = (int)numbs[i];
		i++;
	}
	ft_quicksort(numbs1, 0, l - 1);
	return (numbs1);
}
