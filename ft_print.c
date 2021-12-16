/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybadaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:07:31 by ybadaoui          #+#    #+#             */
/*   Updated: 2021/12/15 04:25:50 by ybadaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(const char *form, va_list ptr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (form[i])
	{
		if (form[i] == '%')
		{
			i++;
			count += checkprint(form[i], ptr);
		}
		else
		{
			write(1, &form[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}
