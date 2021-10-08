/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:12:17 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/25 17:12:17 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	print_ra(t_stack *s)
{
	ra(s);
	printf("ra\n");
}

void	print_rb(t_stack *s)
{
	rb(s);
	printf("rb\n");
}

void	print_rr(t_stack *s)
{
	rr(s);
	printf("rr\n");
}
