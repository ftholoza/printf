/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:31:01 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/23 14:16:20 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_puthexa_u(int nb)
{
	char				*base;
	long unsigned int	n;

	n = (unsigned int) nb;
	base = "0123456789ABCDEF";
	if (n / 16)
		ft_puthexa_u(n / 16);
	write(1, &base[n % 16], 1);
}
