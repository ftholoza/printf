/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_size_decimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:50:00 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/23 14:07:27 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <limits.h>

int	ft_int_size_decimal(int nb)
{
	int	size;

	size = 0;
	if (nb == INT_MAX)
		return (10);
	if (nb == INT_MIN)
		return (11);
	if (nb >= 0 && nb <= 9)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		size++;
	}
	while (nb > 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}
