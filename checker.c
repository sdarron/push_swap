/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 03:55:29 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/10 06:14:13 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	int i;
	int l;
	char *str;
	t_data *data;

	i = 1;
	l = 0;
	str = 0;
	if (ac == 1)
		return (noparameters());
	if (!(data = (t_data *)malloc(sizeof(t_data))))
		return (0);
	initdata(data, ac - 1);
	if (checknum(ac, av))
		return (0);
	while (av[i])
		data->anumbs[l++] = ft_atoi_max(av[i++]);
	if (checkrep(l, data->anumbs) || checkmaxmin(l, data->anumbs))
		return (0);
	data->modnumbs = ft_model(l, data->anumbs);
	instructions(data, l, str);
	if (data->lena <= 0 || data->lenb == -300)
	{
		ft_putstr("KO\n");
		return (0);
	}
	compareanumbs(data->anumbs, data->modnumbs, l);
	allfree(data);
	return (0);
}
