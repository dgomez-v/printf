/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:41:40 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/12/13 12:37:41 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexachange(unsigned int long num, char *str)
{
	int	x;

	x = 0;
	if (num >= 16)
	{
		x += ft_hexachange(num / 16, str);
		x += ft_hexachange(num % 16, str);
	}
	else
		x += ft_putchar(str[num % 16]);
	return (x);
}

int	ft_pointer(unsigned int long ptr)
{
	int	x;

	x = ft_hexachange(ptr, "0123456789abcdef");
	return (x);
}

int	ft_hexadecimal(unsigned int num, char c)
{
	int	x;

	x = 0;
	if (c == 'x')
		x += ft_hexachange(num, "0123456789abcdef");
	else
		x += ft_hexachange(num, "0123456789ABCDEF");
	return (x);
}
