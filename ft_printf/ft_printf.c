/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorina <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:30:43 by imorina           #+#    #+#             */
/*   Updated: 2021/12/20 21:55:28 by imorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_type(const char format, va_list args, int *count)
{

	if (format == 'c')
		ft_print_char(va_arg(args, int), count);			
	else if (format == 's')
		ft_print_str(va_arg(args, char *), count);
	else if (format == 'p')
		ft_print_ptr(va_arg(args, unsigned long int), count);
	else if (format == 'd' || format == 'i')
		ft_print_int(va_arg(args, int), count);
	else if (format == 'u')
		ft_itoa_unsigned(va_arg(args, unsigned int), count);
	else if (format == 'x')
		ft_print_hex(va_arg(args, int), count, 0);
	else if (format == 'X')
		ft_print_hex(va_arg(args, int), count, 1);
	else if (format == '%')
		ft_print_char('%', count);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!input)
		return (0);
	i = 0;
	count = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] != '%')
			ft_print_char(input[i], &count);
		else if (input[i] == '%' && input[i + 1])
			check_type(input[++i], args, &count);
		i++;
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	printf("VALUE : %d\n", ft_printf(" %c ", '0'));
   return (0);	
}**/
