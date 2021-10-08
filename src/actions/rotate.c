/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:49:19 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/22 20:49:19 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <actions.h>

void	ra(t_stack *s)
{
	int	swap;
	int	i;

	i = s->topa;
	while (i > 0)
	{
		swap = s->arr[i - 1];
		s->arr[i - 1] = s->arr[i];
		s->arr[i] = swap;
		i--;
	}
}

void	rb(t_stack *s)
{
	int	swap;
	int	i;

	i = s->topb;
	while (i < s->capacity - 1)
	{
		swap = s->arr[i + 1];
		s->arr[i + 1] = s->arr[i];
		s->arr[i] = swap;
		i++;
	}
}

void	rr(t_stack *s)
{
	ra(s);
	rb(s);
}
