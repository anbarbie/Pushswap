/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:57:21 by antbarbi          #+#    #+#             */
/*   Updated: 2021/09/22 21:57:21 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H
# include <stdlib.h>
# include <stdio.h>
# include <actions.h>
# include <push_swap.h>

int		init(char **av, t_stack *s);
int		init_stack(t_stack *s, int capacity);
int		is_sort(t_stack *s);
int		check_str_is_digit(char *str);
int		is_duplicate(char **tab);
long	long_atoi(const char *nptr);
int		check_error(char **av);
int		error(char *msg);
void	malloc_error(t_stack *s);

#endif