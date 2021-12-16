/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybadaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:05:25 by ybadaoui          #+#    #+#             */
/*   Updated: 2021/12/15 04:07:14 by ybadaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lennum(int num)
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

char	*ft_itoa(int n)
{
	int			len;
	char		*dest;
	long int	num;
	char		*temp;

	num = n;
	len = 0;
	len = ft_lennum(num);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (num < 0)
	{
		dest[0] = '-';
		num = num * (-1);
	}
	while (len-- > (n < 0))
	{
		dest[len] = num % 10 + 48;
		num /= 10;
	}
	temp = dest;
	free(dest);
	return (temp);
}
