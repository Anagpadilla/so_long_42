/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basehexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:57:29 by anagarc4          #+#    #+#             */
/*   Updated: 2023/05/04 15:57:32 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_basehexa(unsigned int hexa, char format)
{
	int	result;

	result = 0;
	if (hexa >= 16)
	{
		result += ft_basehexa(hexa / 16, format);
		result += ft_basehexa(hexa % 16, format);
	}
	else
	{
		if (hexa <= 9)
			result += ft_putchar((hexa + 48));
		else
		{
			if (format == 'x')
				result += ft_putchar(hexa - 10 + 'a');
			if (format == 'X')
				result += ft_putchar(hexa - 10 + 'A');
		}
	}
	return (result);
}
