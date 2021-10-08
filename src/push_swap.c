/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:21:55 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/22 21:21:55 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	quick_sort(t_stack *s)
{
	int		pivot;
	int		count;

	count = 0;
	pivot = s->capacity / 11;
	while (pivot < s->capacity)
	{
		count = 0;
		while (count < s->capacity / 11)
		{
			if (s->arr[s->topa] < pivot
				&& s->arr[s->topa] >= pivot - s->capacity / 11)
			{
				print_pb(s);
				count++;
			}
			else
				print_ra(s);
		}
		pivot += s->capacity / 11;
	}
	while (s->topa > -1)
		print_pb(s);
	buble_max_b(s);
}

int		main(int ac, char **av)
{
	t_stack s;
	int		i;

	i = 0;
	if (ac < 2)
		return (0);
	if (init(av, &s) || is_sort(&s))
	{
		free(s.arr);
		return (0);
	}
	if (s.capacity <= 3)
		sort_len_3(&s);
	else if (s.capacity < 50)
		buble_min(&s);
	else
	{
		convert_input(&s);
		quick_sort(&s);
	}
	free(s.arr);
}
