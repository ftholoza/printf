/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_size_hexa2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:28:41 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/23 14:13:06 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_size_hexa2(unsigned int n)
{
	int	size;

	size = 0;
	if (n >= 0 && n <= 9)
		return (1);
	while (n > 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}
