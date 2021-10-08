/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_len_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:37:39 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/22 21:37:39 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		search_min_a(t_stack *s)
{
	int		i;
	int		min;

	i = 0;
	min = s->arr[i];
	while (i <= s->topa)
	{
		if (s->arr[i] < min)
			min = s->arr[i];
		i++;
	}
	return (min);
}

int		search_max_a(t_stack *s)
{
	int	i;
	int	max;

	i = 0;
	max = s->arr[i];
	while (i <= s->topa)
	{
		if (s->arr[i] > max)
			max = s->arr[i];
		i++;
	}
	return (max);
}

void	sort_len_3(t_stack *s)
{
	int	min;
	int	max;

	if (s->capacity == 1)
		printf("sa\n");
	else
	{
		min = search_min_a(s);
		max = search_max_a(s);
		if (s->arr[2] == min && s->arr[1] == max)
		{
			printf("rrb\n");
			printf("sa\n");
		}
		else if (s->arr[1] == min && s->arr[0] == max)
			printf("sa\n");
		else if (s->arr[0] == min && s->arr[1] == max)
			printf("rra\n");
		else if (s->arr[1] == min && s->arr[2] == max)
			printf("ra\n");
		else
		{
			printf("ra\n");
			printf("sa\n");
		}
	}
}