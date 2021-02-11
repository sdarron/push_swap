/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 01:30:25 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/02 20:46:39 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		compareanumbs(long long int *anumbs, long long int *modnumbs, int l)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	while (i < l)
	{
		if ((int)anumbs[i] != modnumbs[i])
		{
			ft_putstr("KO\n");
			f = 1;
			break ;
		}
		i++;
	}
	if (f == 0)
		ft_putstr("OK\n");
}
