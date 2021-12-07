/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorina <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:32:08 by imorina           #+#    #+#             */
/*   Updated: 2021/12/06 15:05:28 by imorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_print_ptr(void *ptr);
int	ft_print_str(char *str);
int	ft_print_int(int n);
int	ft_print_unisigneddec(unsigned int n);
int	ft_print_hex(unsigned long n);

#endif
