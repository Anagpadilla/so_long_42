/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:26:08 by anagarc4          #+#    #+#             */
/*   Updated: 2023/05/04 15:26:16 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptrhexa(unsigned long long hexa)
{
	int	result;

	result = 0;
	if (hexa >= 16)
	{
		result += ft_putptrhexa(hexa / 16);
		result += ft_putptrhexa(hexa % 16);
	}
	else
	{
		if (hexa <= 9)
			result += ft_putchar((hexa + 48));
		else
			result += ft_putchar(hexa - 10 + 'a');
	}
	return (result);
}

int	ft_putptr(unsigned long long ptr)
{
	int	result;

	result = 0;
	result += write(1, "0x", 2);
	result += ft_putptrhexa(ptr);
	return (result);
}
