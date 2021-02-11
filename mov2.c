/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 18:58:40 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/09 03:08:31 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ifft_movrrr(t_data *data, int l, char *str)
{
	if (!ft_strcmp(str, "rra"))
		ft_movrra(data, l);
	else if (!ft_strcmp(str, "rrb"))
		ft_movrrb(data, l);
	else if (!ft_strcmp(str, "rrr"))
		ft_movrrr(data, l);
}

void	invalidinstructions(t_data *data, char *str)
{
	if (ft_strcmp(str, "rra") && ft_strcmp(str, "rrb") &&
		ft_strcmp(str, "sa") && ft_strcmp(str, "sb") && ft_strcmp(str, "ss") &&
		ft_strcmp(str, "pa") && ft_strcmp(str, "pb") && ft_strcmp(str, "ra") &&
		ft_strcmp(str, "rb") && ft_strcmp(str, "rr") && ft_strcmp(str, "") &&
		ft_strcmp(str, "rrr"))
	{
		ft_putstr("Error\n");
		allfree(data);
		ft_memdel((void**)&str);
		exit(0);
	}
}

void	printab(t_data *data)
{
	int i;

	i = 0;
	ft_putstr("A: ");
	while (i < data->lena)
	{
		ft_putnbr(data->anumbs[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("\nB: ");
	i = 0;
	while (i < data->lenb)
	{
		ft_putnbr(data->bnumbs[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	continstruct(t_data *data, char *str)
{
	if (data->v == 1)
		printab(data);
	invalidinstructions(data, str);
	ft_memdel((void**)&str);
}

void	instructions(t_data *data, int l, char *str)
{
	while (ft_get_next_line(0, &str))
	{
		ifft_movrrr(data, l, str);
		if (!ft_strcmp(str, "sa"))
			ft_movsa(data, l);
		else if (!ft_strcmp(str, "sb"))
			ft_movsb(data);
		else if (!ft_strcmp(str, "ss"))
			ft_movss(data, l);
		else if (!ft_strcmp(str, "pa"))
			ft_movpa(data, l);
		else if (!ft_strcmp(str, "pb"))
			ft_movpb(data, l);
		else if (!ft_strcmp(str, "ra"))
			ft_movra(data, l);
		else if (!ft_strcmp(str, "rb"))
			ft_movrb(data, l);
		else if (!ft_strcmp(str, "rr"))
			ft_movrr(data, l);
		else if (!ft_strcmp(str, ""))
			ft_putstr("Please, enter action!\n");
		continstruct(data, str);
	}
}
