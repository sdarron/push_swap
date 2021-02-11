/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 03:59:30 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/09 02:23:14 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		lenoption(t_data *data, int l)
{
	if (l == 2)
		movlen2(data, l);
	else if (l == 3)
		movlen3(data, l);
	else if (l == 5 || l == 4)
		movlen5(data, l);
	else if (l > 5 && l < 11)
		movlen10(data, l);
	else if (l % 10 != 0 && l < 100 && l > 5)
		movlen99(data, l);
	else if (l % 10 == 0 && l <= 100 && l > 9)
		movlen100(data, l);
	else if (l % 500 == 0)
		movlen500(data, l);
	else if (l > 100)
		movlen499(data, l);
}

int			returnzero(t_data *data)
{
	allfree(data);
	return (0);
}

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
	if (checknum(data, ac, av))
		return (returnzero(data));
	while (av[i])
		data->anumbs[l++] = ft_atoi_max(av[i++]);
	if (checkrep(l, data->anumbs) || checkmaxmin(l, data->anumbs))
		return (returnzero(data));
	data->modnumbs = ft_model(l, data);
	if (compareps(data->anumbs, data->modnumbs, l))
		return (returnzero(data));
	lenoption(data, l);
	allfree(data);
	return (0);
}
