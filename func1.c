/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 23:46:27 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/01 00:15:28 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			longlongnumb(int ac, char **av)
{
	int		i;
	int		l;

	l = 0;
	i = 1;
	while (i < ac)
	{
		while (av[i][l] != '\0')
		{
			if (l > 11)
			{
				ft_putstr("Error\n");
				return (1);
			}
			l++;
		}
		l = 0;
		i++;
	}
	return (0);
}

int			visual(t_data *data, char **av, int i)
{
	if (av[i][0] == '-' && av[i][1] == 'v')
	{
		data->v = 1;
		i++;
	}
	return (i);
}

int			checknum(t_data *data, int ac, char **av)
{
	int		i;
	int		l;

	l = 0;
	i = 1;
	while (i < ac)
	{
		while (av[i][l] != '\0')
		{
			i = visual(data, av, i);
			if (av[i][0] == '-' && l == 0)
				l++;
			if (av[i][l] > 57 || av[i][l] < 48)
			{
				ft_putstr("Error\n");
				return (1);
			}
			l++;
		}
		l = 0;
		i++;
	}
	return (longlongnumb(ac, av));
}

int			checkrep(int l, long long int *numbs)
{
	int		k;
	int		i;

	k = 0;
	i = 1;
	while (l > k)
	{
		while (i < l)
		{
			if (numbs[k] == numbs[i])
			{
				ft_putstr("Error\n");
				return (1);
			}
			i++;
		}
		k++;
		i = k + 1;
	}
	return (0);
}

int			checkmaxmin(int l, long long int *numbs)
{
	int		i;

	i = 0;
	while (i < l)
	{
		if (numbs[i] > 2147483647 || numbs[i] < -2147483648)
		{
			ft_putstr("Error\n");
			return (1);
		}
		i++;
	}
	return (0);
}
