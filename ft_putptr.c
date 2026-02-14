/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratojo <maratojo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 09:38:39 by maratojo          #+#    #+#             */
/*   Updated: 2026/02/14 14:59:29 by maratojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr(unsigned int n)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_puthexa(n, "0123456879abcdef");
	return (count);
}
