/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorina <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:30:53 by imorina           #+#    #+#             */
/*   Updated: 2021/12/06 14:30:55 by imorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *ptr, int *count)
{
	ft_print_str("0x", count);
	ft_print_hex((unsigned long)ptr, count, 'p');
	return (*count);
}
