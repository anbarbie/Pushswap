/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:20:16 by antbarbi          #+#    #+#             */
/*   Updated: 2021/10/06 20:20:16 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <init.h>

int			error(char *msg)
{
	ft_putstr_fd("\e[0;31mError\e[0m", 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(msg, 2);
	ft_putstr_fd("\n", 2);
	return (0);
}

void		malloc_error(t_stack *s)
{
	(void)s;
	ft_putstr_fd("Malloc Error\n", 2);
	exit(0);
}
