/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 21:24:57 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/25 21:24:57 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	top_or_down_a(t_stack *s, int min)
{
	int	i;

	i = 0;
	while (s->arr[i] != min)
		i++;
	if (i < s->topa / 2)
	{
		while (s->arr[s->topa] != min)
			print_rra(s);
	}
	else
	{
		while (s->arr[s->topa] != min)
			print_ra(s);
	}
}

void	buble_min_a(t_stack *s)
{
	int	min;

	while (s->topa > 1)
	{
		min = search_min_a(s);
		if (s->arr[s->topa] == min)
			print_pb(s);
		else if (s->arr[s->topa - 1] == min)
		{
			print_sa(s);
			print_pb(s);
		}
		else
		{
			top_or_down_a(s, min);
			print_pb(s);
		}
	}
	if (s->arr[s->topa] > s->arr[0])
		print_sa(s);
}

void	full_push_to_a(t_stack *s)
{
	while (s->topb != s->capacity)
		print_pa(s);
}

void	buble_min(t_stack *s)
{
	buble_min_a(s);
	full_push_to_a(s);
}
