/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmov3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 06:45:02 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/25 23:46:07 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	putsa(t_data *data, int l)
{
	ft_putstr("sa\n");
	ft_movsa(data, l);
}

void	putsb(t_data *data)
{
	ft_putstr("sb\n");
	ft_movsb(data);
}

void	putrrb(t_data *data, int l)
{
	ft_movrrb(data, l);
	ft_putstr("rrb\n");
}

void	doublputrrb(t_data *data, int l)
{
	putrrb(data, l);
	putrrb(data, l);
}
