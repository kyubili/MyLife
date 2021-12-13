/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorina <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:31:41 by imorina           #+#    #+#             */
/*   Updated: 2021/12/13 15:46:05 by imorina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int nbr, int *count)
{
	char	*r;
	
	r = ft_itoa(nbr);
	ft_putstr_fd(nbr, 1);
	*count += ft_strlen(nbr);
	free (r);
	return (count);	
}
