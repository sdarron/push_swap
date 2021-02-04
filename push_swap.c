/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 03:59:30 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/16 01:30:59 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int ac, char **av)
{
	int		i;
	int		l;
	t_data	*data;

	i = 1;
	l = 0;
	if (ac == 1)
		return (noparameters());
	if (!(data = (t_data*)malloc(sizeof(t_data))))
		return (0);
	initdata(data, ac - 1);
	if (checknum(ac, av))
		return (0);
	while (av[i])
		data->anumbs[l++] = ft_atoi_max(av[i++]);
	if (checkrep(l, data->anumbs) || checkmaxmin(l, data->anumbs))
		return (0);
	data->modnumbs = ft_model(l, data->anumbs);
	if (compareps(data->anumbs, data->modnumbs, l))
		return (0);
	if (l == 2)
		movlen2(data, l);
	if (l == 3)
		movlen3(data, l);
	if (l == 5 || l == 4)
		movlen5(data, l);
	if (l > 5)
		movlen100(data, 0, l - 1);
	for (i = 0; i < l; i++)
	{
	 	ft_putnbr(data->anumbs[i]);
		ft_putchar(' ');
	}
	ft_putchar('\n');
	for (i = 0; i < l; i++)
	{
	 	ft_putnbr(data->bnumbs[i]);
		ft_putchar(' ');
	}
	ft_putchar('\n');
	allfree(data);
	return (0);
}