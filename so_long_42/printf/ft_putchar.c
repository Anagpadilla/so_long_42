/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:18:24 by anagarc4          #+#    #+#             */
/*   Updated: 2023/05/04 13:18:27 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	int	i;

	i = write(1, &c, 1);
	if (i == -1)
		exit(-1);
	return (i);
}