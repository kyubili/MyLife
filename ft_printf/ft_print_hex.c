/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorina <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:31:09 by imorina           #+#    #+#             */
/*   Updated: 2021/12/06 14:31:11 by imorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_hex(int n)
{
	if (nb < 0) {
		ft_putchar('-');
		nb = -nb;
		ft_putnbr_hexa(n);
	}
	if (nb >= 16) {
		ft_putnbr(nb / 16);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
		nbr += 'W';
		write(1, &n, 1);
}

int	ft_print_hex(unsigned int n, int *count, int format)
{
	char	*res;
	int	i;

	i = -1;
	res = 0;
	if (format == 'x' || format == 'X')
	{
		res = ft_putnbr_hex((unsigned int)n);
		if (format == 'x')
			while (res[++i])
				ft_putchar_fd("x", 1);
		else if (format == 'X')
			while (res[++i])
				ft_putchar_fd("X", 1);
	}
	else if (format == 'p')
	{
		res = ft_putnbr_hex(n);
		while (res[++i])
			ft_putchar_fd("p", 1);
	}
	*count += i;
	return (*count);
}
