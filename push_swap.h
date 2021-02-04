/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 04:04:06 by sdarron           #+#    #+#             */
/*   Updated: 2020/09/16 01:09:28 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
#include <limits.h>

typedef struct		s_data
{
	int				*bnumbs;
	long long int	*anumbs;
	int				*modnumbs;
	int				lenb;
	int				lena;
}					t_data;

typedef struct		s_data5
{
	int				min1;
	int 			min2;
	int				n1;
	int				n2;
}					t_data5;


long long int		ft_atoi_max(const char *str);
int					*ft_model(int l, long long int *anumbs);
void				compareanumbs(long long int *anumbs, int *modnumbs, int l);
void				ft_movsa(t_data *data, int l);
void				ft_movsb(t_data *data);
void				ft_movss(t_data *data, int l);
void				ft_movpb(t_data *data, int l);
void				ft_movpa(t_data *data, int l);
void				ft_movra(t_data *data, int l);
void				ft_movrb(t_data *data, int l);
void				ft_movrr(t_data *data, int l);
void				ft_movrra(t_data *data, int l);
void				ft_movrrb(t_data *data, int l);
void				ft_movrrr(t_data *data, int l);
int					checknum(int ac, char **av);
int					checkrep(int l, long long int *numbs);
int					checkmaxmin(int l, long long int *numbs);
void				allfree(t_data *data);
void				instructions(t_data *data, int l, char *str);
void				initdata(t_data *data, int i);
void				ifft_movrrr(t_data *data, int l, char *str);
int					noparameters();
int					compareps(long long int *anumbs, int *modnumbs, int l);
void				movlen2(t_data *data, int l);
void				movlen3(t_data *data, int l);
void				movlen5(t_data *data, int l);
void				putrra(t_data *data, int l);
void				putra(t_data *data, int l);
void				putpa(t_data *data, int l);
void				putpb(t_data *data, int l);
void				putsa(t_data *data, int l);
void				putsb(t_data *data);
void				movlen4(t_data *data, int l);
void				movlen5else(t_data *data, int l);
void				movtobnumbs(t_data *data, int l);
void				movlen100(t_data *data, int n, int l);

#endif
