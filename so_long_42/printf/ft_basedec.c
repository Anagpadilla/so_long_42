/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basedec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:51:07 by anagarc4          #+#    #+#             */
/*   Updated: 2023/05/05 15:51:10 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_basedec(unsigned int n)
{
	int	result;

	result = 0;
	if (n >= 0 && n <= 9)
		result += ft_putchar(48 + n);
	else
	{
		result += ft_basedec(n / 10);
		result += ft_putchar(48 + (n % 10));
	}
	return (result);
}
