/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compareps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 23:55:14 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/08 15:42:31 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		compareps(long long int *anumbs, long long int *modnumbs, int l)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	while (i < l)
	{
		if (anumbs[i] != modnumbs[i])
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
