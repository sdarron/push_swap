/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compareps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 23:55:14 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/11 01:30:14 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		compareps(long long int *anumbs, int *modnumbs, int l)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	while (i < l)
	{
		if ((int)anumbs[i] != modnumbs[i])
		{
			f = 1;
			break ;
		}
		i++;
	}
	if (f == 0 && i != (l - 1))
		return (1);
	else
		return (0);
}
