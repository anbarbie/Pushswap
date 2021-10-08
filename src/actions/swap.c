/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:49:33 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/22 20:49:33 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <actions.h>

void	sa(t_stack *s)
{
	int	swap;

	if (s->topa < 1)
		return ;
	swap = s->arr[s->topa];
	s->arr[s->topa] = s->arr[s->topa - 1];
	s->arr[s->topa - 1] = swap;
}

void	sb(t_stack *s)
{
	int	swap;

	if (s->topb < 1)
		return ;
	swap = s->arr[s->topb];
	s->arr[s->topb] = s->arr[s->topb + 1];
	s->arr[s->topb + 1] = swap;
}

void	ss(t_stack *s)
{
	sa(s);
	sb(s);
}
