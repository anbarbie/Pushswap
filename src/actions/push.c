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
	pop_b(s);
	push_a(s, value);
}

void	pb(t_stack *s)
{
	int	value;

	if (s->topb == s->capacity)
		return ;
	value = s->arr[s->topb];
	pop_b(s);
	push_a(s, value);
}