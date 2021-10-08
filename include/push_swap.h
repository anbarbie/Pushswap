/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:22:25 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/22 21:22:25 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <init.h>

void	quick_sort(t_stack *s);
int		search_min_a(t_stack *s);
int		search_max_a(t_stack *s);
void	sort_len_3(t_stack *s);
void	buble_min(t_stack *s);
void	full_push_to_a(t_stack *s);
void	buble_min_a(t_stack *s);
void	top_or_down_a(t_stack *s, int min);
void	buble_max_b(t_stack *s);
int		search_max_b(t_stack *s);
void	top_or_down_b(t_stack *s, int max);
void	print_sa(t_stack *s);
void	print_sb(t_stack *s);
void	print_ss(t_stack *s);
void	print_ra(t_stack *s);
void	print_rb(t_stack *s);
void	print_rr(t_stack *s);
void	print_rra(t_stack*s);
void	print_rrb(t_stack *s);
void	print_rrr(t_stack *s);
void	print_pa(t_stack *s);
void	print_pb(t_stack *s);
int		convert_input(t_stack *s);
void	buble_tab(t_stack *s, int *tab);
int		*copy_tab(t_stack *s);
int		index_of_sort_arr(int *tab, int value, int len);

#endif