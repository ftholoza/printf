/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:11:07 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/23 14:06:48 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_putunsigned(unsigned int n)
{
	if (n < 0)
		return ;
	if (n / 10)
		ft_putunsigned(n / 10);
	ft_putchar(((n % 10) + 48));
}
