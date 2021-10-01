/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:56:26 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/22 21:56:26 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <check.h>

int		init(char **av, t_stack *s)
{
	int	i;

	if ((i = check_error(av)) == -1)
		return (1);
	if ((init_stack(s, i)) == -1)
		return (1);
	while (i > 0)
	{
		push_a(s, ft_atoi(av[i]));
		i--;
	}
	return (0);
}
