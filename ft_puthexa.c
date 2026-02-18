/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratojo <maratojo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 08:31:38 by maratojo          #+#    #+#             */
/*   Updated: 2026/02/18 07:37:22 by maratojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char *base)
{
	int				count;
	unsigned int	len_base;

	count = 0;
	len_base = 0;
	while (base[len_base])
		len_base++;
	if (n >= len_base)
		count += ft_puthexa(n / len_base, base);
	count += ft_putchar(base[n % len_base]);
	return (count);
}
