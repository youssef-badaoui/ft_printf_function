/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybadaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:11:09 by ybadaoui          #+#    #+#             */
/*   Updated: 2021/12/15 04:42:44 by ybadaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		count;

	va_start(ptr, format);
	count = ft_print(format, ptr);
	va_end(ptr);
	return (count);
}
/*
int main()
{
//int i = 79468463;
	//int j = -32352532;
//	char c = 'k';
//	char h = 's';
//	char str[] = "ok!";
//	char str2[] = "";
	printf("\n%d",ft_printf("\n%x", -322));
	printf("\n%d" ,printf("\n%x", -322));
}
*/
