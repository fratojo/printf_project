/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratojo <maratojo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 09:54:35 by maratojo          #+#    #+#             */
/*   Updated: 2026/02/17 07:59:42 by maratojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_conversion(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		count += ft_putptr(va_arg(arg, void *));
	else if ((c == 'd') || (c == 'i'))
		count += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		count += ft_puthexa(va_arg(arg, unsigned long), "0123456789");
	else if (c == 'x')
		count += ft_puthexa(va_arg(arg, unsigned long), "0123456789abcdef");
	else if (c == 'X')
		count += ft_puthexa(va_arg(arg, unsigned long), "0123456789ABCDEF");
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, format);
	if (!format)
		return (-1);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += handle_conversion(format[i + 1], arg);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
