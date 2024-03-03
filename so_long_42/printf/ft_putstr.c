/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:29:34 by anagarc4          #+#    #+#             */
/*   Updated: 2023/05/05 21:13:49 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	res;

	if (!s)
		return (ft_putstr("(null)"));
	res = 0;
	while (*s != '\0')
		res += ft_putchar(*s++);
	return (res);
}
