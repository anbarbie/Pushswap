/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:13:12 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/25 17:13:12 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	print_rra(t_stack *s)
{
	rra(s);
	printf("rra\n");
}

void	print_rrb(t_stack *s)
{
	rrb(s);
	printf("rrb\n");
}

void	print_rrr(t_stack *s)
{
	rrr(s);
	printf("rrr\n");
}
