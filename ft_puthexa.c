/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratojo <maratojo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 08:31:38 by maratojo          #+#    #+#             */
/*   Updated: 2026/02/16 08:53:32 by maratojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char *base)
{
	unsigned long	len_base;
	int				count;

	count = 0;
	len_base = 0;
	while (base[len_base])
		len_base++;
	if (n >= len_base)
		count += ft_puthexa(n / len_base, base);
	count += ft_putchar(base[n % len_base]);
	return (count);
}
