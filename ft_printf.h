/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:20:11 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/12/13 12:07:35 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr(int num);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_pointer(unsigned int long ptr);
int	ft_unsigned_int(unsigned int long num);
int	ft_hexadecimal(unsigned int num, char c);

#endif