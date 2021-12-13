/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorina <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:31:22 by imorina           #+#    #+#             */
/*   Updated: 2021/12/13 15:16:03 by imorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		str = ft_putstr_fd("(null)", 1);
		return;
	}
	while (str)
	{
		str = ft_putstr_fd(str, 1);
		*count += ft_strlen(str);
	}
	return (count);
}
