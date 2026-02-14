/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratojo <maratojo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 09:54:35 by maratojo          #+#    #+#             */
/*   Updated: 2026/02/14 13:42:38 by maratojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

static int	handle_conversion(char c)
{
	int	count;
	va_list arg;

	count = 0;
	if(c = 'c')
		count += ft_putchar(va_arg(arg, char));
	else if (c = 's')
		count += ft_putstr(va_arg(arg, char));
	else if (c = 'p')
		count += ft_putptr(va_arg(arg, int));
	else if ((c = 'd') || (c = 'i'))
		count += ft_putnbr(va_arg(arg, int));
	else if (c = 'u')
		count += ft_putnbr_unsigned(va_arg(arg, unsigned int));
	else if (c = 'x')
		count += ft_puthexa(va_arg(arg, int), "0123456789abcdef");
	else if (c = 'X')
		count += ft_puthexa(va_arg(arg, int), "0123456789ABCDEF");
	return (count);
}

int ft_printf(const char *format, ...)
{

}
