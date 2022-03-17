/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujang <sujang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:26:08 by sujang            #+#    #+#             */
/*   Updated: 2022/03/17 18:11:46 by sujang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(int nbr)
{
	int				len;
	unsigned int	n;

	n = nbr;
	len = 0;
	if (n > 9)
	{
		len += ft_putnbr(n / 10);
		len += ft_putchar(n % 10 + '0');
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}

int	ft_pointerhexdecimal(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr < 16)
	{
		if (nbr < 10)
			len += ft_putchar(nbr + 48);
		else
			len += ft_putchar(nbr + 87);
	}
	if (nbr > 15)
	{
		len += ft_pointerhexdecimal(nbr / 16);
		len += ft_pointerhexdecimal(nbr % 16);
	}
	return (len);
}

int	ft_pointer(void *ptr)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_pointerhexdecimal((unsigned long)ptr);
	return (len);
}
