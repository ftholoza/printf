/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:38:11 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/23 14:12:20 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *str);
int		ft_putchar(int c);
int		ft_putstr(char *s);
char	*ft_itoa(int n);
void	ft_putnbr(int n);
void	ft_puthexa_l(long long unsigned int nb);
void	ft_puthexa_u(int nb);
void	ft_putunsigned(unsigned int nb);
int		ft_print_adress(long long unsigned int ptr);
int		ft_int_size_decimal(int nb);
int		ft_int_size_hexa(long long unsigned nb);
int		ft_int_size_hexa2(unsigned int nb);
int		ft_int_u(unsigned int nb);
void	ft_puthexa_l2(int nb);

#endif
