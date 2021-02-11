/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 04:04:06 by sdarron           #+#    #+#             */
/*   Updated: 2020/10/09 03:09:03 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct		s_data
{
	long long int	*bnumbs;
	long long int	*anumbs;
	long long int	*modnumbs;
	int				lenb;
	int				lena;
	int				v;
}					t_data;

typedef struct		s_data5
{
	int				min1;
	int				min2;
	int				n1;
	int				n2;
}					t_data5;

long long int		ft_atoi_max(const char *str);
long long int		*ft_model(int l, t_data *data);
void				compareanumbs(long long int *a, long long int *m, int l);
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
int					checknum(t_data *data, int ac, char **av);
int					checkrep(int l, long long int *numbs);
int					checkmaxmin(int l, long long int *numbs);
void				allfree(t_data *data);
void				instructions(t_data *data, int l, char *str);
void				initdata(t_data *data, int i);
void				invalidinstructions(t_data *data, char *str);
void				ifft_movrrr(t_data *data, int l, char *str);
void				ft_movrrr(t_data *data, int l);
int					noparameters();
int					compareps(long long int *a, long long int *mod, int l);
void				movlen2(t_data *data, int l);
void				movlen3(t_data *data, int l);
void				movlen5(t_data *data, int l);
void				putrra(t_data *data, int l);
void				putra(t_data *data, int l);
void				putpa(t_data *data, int l);
void				putpb(t_data *data, int l);
void				putsa(t_data *data, int l);
void				putsb(t_data *data);
void				putrb(t_data *data, int l);
void				movlen4(t_data *data, int l);
void				movlen5else(t_data *data, int l);
void				movtobnumbs(t_data *data, int l);
void				movlen100(t_data *data, int l);
void				movlen500(t_data *data, int l);
void				movlen99(t_data *data, int l);
void				movlen499(t_data *data, int l);
int					ft_strko(t_data *data);
void				endmaincheck(t_data *data, int l);
void				puttob(t_data *data, int l, int n);
void				initdata5(t_data *data, t_data5 *data5);
void				puttoddel(t_data *data, int l, int del);
void				puttoadel(t_data *data, int l, int kd);
void				puttobandline(t_data *data, int l, int n);
void				putrrb(t_data *data, int l);
void				doublputrrb(t_data *data, int l);
void				puttobdel499(t_data *data, int l, int del);
void				puttoadel499(t_data *data, int l);
void				puttob499(t_data *data, int n, int l, int pat);
void				edvans(t_data *data, int l, int k);
void				lenoption(t_data *data, int l);
void				puttobcont(t_data *data, int l, int n, int k);
void				oneline(t_data *d, int l, int n);
int					allrrb(t_data *d, int l, int k);
void				puttobcont500(t_data *d, int l, int n, int k);
void				puttob500(t_data *d, int l, int n);
void				whilerrb(t_data *d, int l, int n);
int					pursb500(t_data *d, int k, int f);
int					allrrb500(t_data *d, int l, int k, int f);
void				oneline500(t_data *d, int l, int n);
void				movlencont500(t_data *d, int l, int k, int f);
int					visual(t_data *data, char **av, int i);
void				printab(t_data *data);
int					putanumbs(t_data *data, int i, int l, char **av);
int					retzero(t_data *data);
int					endallrrb(t_data *d, int l, int k, int f);
int					whilerrbhund (t_data *d, int l, int i);
int					endallrrb500(t_data *d, int l, int k, int f);
int					endallrrb5001(t_data *d, int l, int k, int f);
int					returnzero(t_data *data);
void				movlen10(t_data *d, int l);

#endif
