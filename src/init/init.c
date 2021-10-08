/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:01:58 by antbarbi          #+#    #+#             */
/*   Updated: 2021/10/06 19:01:58 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	init_stack(t_stack *s, int capacity)
{
	s->arr = malloc(sizeof(int) * capacity);
	if (!(s->arr))
		return (-1);
	s->topa = -1;
	s->topb = capacity;
	s->capacity = capacity;
	return (0);
}

int	init(char **av, t_stack *s)
{
	int		i;

	i = check_error(av);
	if (i == -1)
		return (1);
	if ((init_stack(s, i) == -1))
		return (1);
	while (i > 0)
	{
		if (s->topa < s->capacity - 1)
		{	
			s->topa++;
			s->arr[s->topa] = ft_atoi(av[i]);
		}
		i--;
	}
	return (0);
}
