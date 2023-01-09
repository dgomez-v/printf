/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alphanum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:42:19 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/12/19 10:32:54 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int num)
{
	int	x;

	x = 0;
	if (num == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	else if (num > 9)
	{
		x += ft_putnbr(num / 10);
		x += ft_putnbr(num % 10);
	}
	else if (num < 0)
	{
		x += ft_putchar('-');
		x += ft_putnbr(-num);
	}
	else
		x += ft_putchar(num + '0');
	return (x);
}

int	ft_unsigned_int(unsigned int long num)
{
	int	x;

	x = 0;
	if (num >= 10)
	{
		x += ft_unsigned_int(num / 10);
		x += ft_putchar("0123456789"[num % 10]);
	}
	else
		x += ft_putchar("0123456789"[num % 10]);
	return (x);
}

int	ft_putstr(char *str)
{
	int	x;

	x = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[x])
	{
		ft_putchar(str[x]);
		x++;
	}
	return (x);
}
