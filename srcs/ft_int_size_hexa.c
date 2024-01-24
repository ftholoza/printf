/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_size_hexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:50:35 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/23 14:08:12 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "stdio.h"

int	ft_int_size_hexa(long long unsigned int n)
{
	int	size;

	size = 0;
	while (n > 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}
