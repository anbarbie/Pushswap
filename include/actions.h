/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:30:48 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/22 20:30:48 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTIONS_H
# define ACTIONS_H
# include "../libft/libft.h"

void	pa(t_stack *s);
void	pb(t_stack *s);
void	ra(t_stack *s);
void	rb(t_stack *s);
void	rr(t_stack *s);
void	sa(t_stack *s);
void	sb(t_stack *s);
void	ss(t_stack *s);
void	rra(t_stack *s);
void	rrb(t_stack *s);
void	rrr(t_stack *s);
void	pop_a(t_stack *s);
void	pop_b(t_stack *s);
void	push_a(t_stack *s, int value);
void	push_b(t_stack *s, int value);

#endif