/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:28:37 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/22 20:28:37 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <actions.h>

void	pa(t_stack *s)
{
	int	value;

	if (s->topb == s->capacity)
		return ;
	value = s->arr[s->topb];
	if (s->topb < s->capacity)
		s->topb++;
	if (s->topa < s->capacity - 1)
	{
		s->topa++;
		s->arr[s->topa] = value;
	}
}

void	pb(t_stack *s)
{
	int	value;

	if (s->topa == -1)
		return ;
	value = s->arr[s->topa];
	if (s->topa > -1)
		s->topa--;
	if (s->topb > 0)
	{
		s->topb--;
		s->arr[s->topb] = value;
	}
}
