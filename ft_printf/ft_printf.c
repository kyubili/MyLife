/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorina <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:30:43 by imorina           #+#    #+#             */
/*   Updated: 2021/12/06 15:13:22 by imorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(int c, int *count)									// print char function
{
	write(1, &c, 1);
	*count += 1;
}

void	check_type(const char format, va_list args, int *count)			// which type? (%d, %c, ..(
{
	if (format == 'c')
		ft_print_char(va_arg(args, int), count);						// 				
	else if (format == 's')
		count += ft_print_str(va_arg(args, char *), count);
	else if (format == 'p')
		count += ft_print_ptr(va_arg(args, void *), count);
	else if (format == 'd' || format == 'i')
		count += ft_print_int(va_arg(args, int), count);
	else if (format == 'u')
		count += ft_print_unsigneddec(va_arg(args, unsigned int), count);
	else if (format == 'x' || format == 'X')
		count += ft_print_hex(va_arg(args, int), count);
	else if (format == '%')
		ft_putchar_fd('%', count);
	
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int	i;
	int	count;

	if (!input)
		return (0);
	i = 0;
	count = 0;
	va_start(args, input);
	while (input[i]) != '%')
	{
		if (input[i] !='%')
			ft_putchar_c(str[i], &count);
		else if (input[i] == '%' && input[i + 1])
			check_type(input[++i], args, &count);
		i++;
	}
	va_end(args);
	return (count);
}
