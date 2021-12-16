/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr45.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybadaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:20:22 by ybadaoui          #+#    #+#             */
/*   Updated: 2021/12/15 04:37:17 by ybadaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lennum(unsigned int num)
{
	int			len;
	long int	n;

	n = num;
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	putnbr45(unsigned int n)
{
	char			*str;
	int				i;
	unsigned int	nb;

	i = 0;
	nb = n;
	str = malloc(ft_lennum(nb) + 1);
	str[i++] = 0;
	while (n / 10 > 0)
	{
		str[i++] = n % 10 + 48;
		n = n / 10;
	}
	str[i] = n + 48;
	while (str[i] != 0)
		write(1, &str[i--], 1);
	free(str);
	return (ft_lennum(nb));
}
