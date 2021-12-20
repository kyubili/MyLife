/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorina <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:32:08 by imorina           #+#    #+#             */
/*   Updated: 2021/12/20 21:55:43 by imorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
void	check_type(const char format, va_list args, int *count);
void	ft_print_char(int c, int *count);
void	ft_print_ptr(unsigned long int ptr, int *count);
void	ft_print_str(char *str, int *count);
void	ft_print_int(int nbr, int *count);
//void	ft_print_unsigneddec(unsigned int nbr, int *count);
void	ft_print_hex(unsigned int n, int *count, int format);
void	ft_print_hex_long(unsigned long int n, int *count, int format);
void	ft_putchar(char c);
void	ft_putnbr_hex(int n);
int		ft_num_len(unsigned int nbr);
void	ft_itoa_unsigned(unsigned int nbr, int *count);

int		ft_strlen(const char *s);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *str, int fd);

void	ft_putstr_fd(char *str, int fd);

void	ft_putnbr_fd(int n, int fd);

char	*ft_itoa(int n);

#endif
