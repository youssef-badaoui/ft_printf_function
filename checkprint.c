/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybadaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:04:17 by ybadaoui          #+#    #+#             */
/*   Updated: 2021/12/15 04:52:30 by ybadaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checkprint(const char form, va_list ptr)
{
	int	count;

	if (form == 'c')
		count = ft_putchar(va_arg(ptr, int));
	if (form == 's')
		count = ft_putstr(va_arg(ptr, char*));
	if (form == 'p')
	{
		write(1, "0x", 2);
		count = puthex(va_arg(ptr, unsigned long long)) + 2;
	}
	if (form == 'd')
		count = ft_putstr(ft_itoa(va_arg(ptr, int)));
	if (form == 'i')
		count = ft_putstr(ft_itoa(va_arg(ptr, unsigned int)));
	if (form == 'u')
		count = putnbr45(va_arg(ptr, unsigned int));
	if (form == 'x')
		count = puthex(va_arg(ptr, unsigned int));
	if (form == 'X')
		count = puthexup(va_arg(ptr, unsigned int));
	if (form == '%')
		write(count = 1, &form, 1);
	return (count);
}
