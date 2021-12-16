/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthexup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybadaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:18:43 by ybadaoui          #+#    #+#             */
/*   Updated: 2021/12/15 04:32:22 by ybadaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_adrlen(unsigned long long adr)
{
	int	count;

	count = 0;
	while (adr > 0)
	{
		adr /= 16;
		count++;
	}
	return (count);
}

int	puthexup(unsigned int nb)
{
	unsigned long	n;
	int				d;
	int				j;
	int				size;
	char			*hexnum;

	size = ft_adrlen(nb);
	j = 0;
	hexnum = malloc(size + 1);
	hexnum[j++] = 0;
	n = nb;
	if (n == 0)
	{
		ft_putstr("0");
		free(hexnum);
		return (1);
	}
	while (n > 0)
	{
		d = n % 16;
		if (d < 10)
			hexnum[j++] = 48 + d;
		else
			hexnum[j++] = 55 + d;
		n = n / 16;
	}
	while (hexnum[--j] != 0)
		write(1, &hexnum[j], 1);
	free(hexnum);
	return (size);
}
