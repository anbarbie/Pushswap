/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:18:05 by antbarbi          #+#    #+#             */
/*   Updated: 2021/10/06 20:18:05 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <init.h>

int	is_sort(t_stack *s)
{
	int	i;

	i = 0;
	if (s->topb != s->capacity)
		return (0);
	if (s->topa == 0)
		return (1);
	while (i < s->topa)
	{
		if (s->arr[i] < s->arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}
