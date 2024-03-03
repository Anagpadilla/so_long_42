/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:19:43 by anagarc4          #+#    #+#             */
/*   Updated: 2023/05/04 13:19:45 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	static int	result;
	long		number;

	result = 0;
	number = n;
	if (number < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	if (number > 9)
	{
		ft_putnbr(number / 10);
		number = number % 10;
	}
	result++;
	ft_putchar(number + '0');
	if (n < 0)
		result++;
	return (result);
}
