/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 03:55:29 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/07 01:40:21 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_strko(t_data *data)
{
	ft_putstr("KO\n");
	allfree(data);
	return (0);
}

int		retzero(t_data *data)
{
	allfree(data);
	return (0);
}

void	endmaincheck(t_data *data, int l)
{
	compareanumbs(data->anumbs, data->modnumbs, l);
	allfree(data);
}

int		putanumbs(t_data *data, int i, int l, char **av)
{
	if (data->v == 1)
	{
		i = 2;
		while (av[i])
			data->anumbs[l++] = ft_atoi_max(av[i++]);
		data->lena--;
	}
	if (data->v == 0)
		while (av[i])
			data->anumbs[l++] = ft_atoi_max(av[i++]);
	return (l);
}

int		main(int ac, char **av)
{
	int		i;
	int		l;
	char	*str;
	t_data	*data;

	i = 1;
	l = 0;
	str = 0;
	if (ac == 1)
		return (noparameters());
	if (!(data = (t_data *)malloc(sizeof(t_data))))
		return (0);
	initdata(data, ac - 1);
	if (checknum(data, ac, av))
		return (retzero(data));
	l = putanumbs(data, i, l, av);
	if (checkrep(l, data->anumbs) || checkmaxmin(l, data->anumbs))
		return (retzero(data));
	data->modnumbs = ft_model(l, data);
	instructions(data, l, str);
	if (data->lena < 0 || data->lenb == -300)
		return (ft_strko(data));
	endmaincheck(data, l);
	return (0);
}
