/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:56:18 by anagarc4          #+#    #+#             */
/*   Updated: 2023/05/04 11:56:26 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char format, va_list args)
{
	int	result;

	result = 0;
	if (format == 'c')
		result += ft_putchar(va_arg(args, int));
	else if (format == '%')
		result += ft_putchar('%');
	else if (format == 's')
		result += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		result += ft_putptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		result += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		result += ft_basedec(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		result += ft_basehexa(va_arg(args, unsigned int), format);
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		result;
	int		i;

	va_start(args, str);
	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			result += ft_format(str[i + 1], args);
			i++;
		}
		else
			result += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (result);
}
