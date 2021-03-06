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

void	quick_sort(t_stack *s, int chunk)
{
	int		pivot;
	int		count;

	count = 0;
	pivot = s->capacity / chunk;
	while (pivot < s->capacity)
	{
		count = 0;
		while (count < s->capacity / chunk)
		{
			if (s->arr[s->topa] < pivot
				&& s->arr[s->topa] >= pivot - s->capacity / chunk)
			{
				print_pb(s);
				count++;
			}
			else
				print_ra(s);
		}
		pivot += s->capacity / chunk;
	}
	while (s->topa > -1)
		print_pb(s);
	advanced_sort(s);
}

int	main(int ac, char **av)
{
	t_stack	s;

	if (ac < 2)
		return (0);
	if (init(av, &s) || is_sort(&s))
	{
		free(s.arr);
		return (0);
	}
	if (s.capacity <= 3)
		sort_3(&s);
	else if (s.capacity <= 50)
		simple_sort(&s);
	else
	{
		convert_input(&s);
		if (s.capacity <= 100)
			quick_sort(&s, 5);
		else
			quick_sort(&s, 10);
	}
	free(s.arr);
}
