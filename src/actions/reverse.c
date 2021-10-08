/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:49:05 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/22 20:49:05 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <actions.h>

void	rra(t_stack *s)
{
	int	swap;
	int	i;

	i = 0;
	while (i < s->topa)
	{
		swap = s->arr[i];
		s->arr[i] = s->arr[i + 1];
		s->arr[i + 1] = swap;
		i++;
	}
}

void	rrb(t_stack *s)
{
	int	swap;
	int	i;

	i = s->capacity - 1;
	while (i > s->topb)
	{
		swap = s->arr[i];
		s->arr[i] = s->arr[i - 1];
		s->arr[i - 1] = swap;
		i--;
	}
}

void	rrr(t_stack *s)
{
	rra(s);
	rrb(s);
}