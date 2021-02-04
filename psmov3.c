/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psmov3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 06:45:02 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/08 06:45:27 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void putsa(t_data *data, int l)
{
	ft_putstr("sa\n");
	ft_movsa(data, l);
}

void putsb(t_data *data)
{
	ft_putstr("sb\n");
	ft_movsb(data);
}
