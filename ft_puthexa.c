/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratojo <maratojo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 08:31:38 by maratojo          #+#    #+#             */
/*   Updated: 2026/02/14 11:10:55 by maratojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexa(int n, char *base)
{
	int	len_base;
	int	count;

	count = 0;
	len_base = 0;
	while (base[len_base])
		len_base++;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n < len_base)
		count += ft_putchar(base[n]);
	else if (n >= len_base)
	{
		count += ft_puthexa(n / len_base, base);
		count += ft_puthexa(n % len_base, base);
	}
	return (count);
}
