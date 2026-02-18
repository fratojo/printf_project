/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratojo <maratojo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 09:38:39 by maratojo          #+#    #+#             */
/*   Updated: 2026/02/18 07:38:33 by maratojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexa_long(unsigned long n)
{
	int		count;
	char	*base;

	base = "0123465789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_puthexa_long(n / 16);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	nb;

	if (!ptr)
		return (ft_putstr("(nil)"));
	nb = (unsigned long)ptr;
	count = 0;
	count += ft_putstr("0x");
	count += ft_puthexa_long(nb);
	return (count);
}
