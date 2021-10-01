/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:34:05 by antbarbi          #+#    #+#             */
/*   Updated: 2019/11/28 16:34:56 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fill_string(unsigned int n, int index, char *str)
{
	if (n >= 10)
		ft_fill_string(n / 10, index - 1, str);
	str[index] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	int				size;

	size = 1;
	if (n < 0)
	{
		nbr = -n;
		size++;
	}
	else
		nbr = n;
	while (nbr >= 10)
	{
		nbr /= 10;
		size++;
	}
	if (!(str = malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	ft_fill_string(n < 0 ? -n : n, size - 1, str);
	if (n < 0)
		str[0] = '-';
	return (str);
}
