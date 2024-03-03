/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:59:47 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/14 19:42:10 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src || !n)
		return (dest);
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char *)dest + n - 1) = *((char *)src + n - 1);
			n--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char str1[] = "abcdef";
	char str2[] = "123456";

	ft_memmove(str2, str1, 3);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	return (0);
}
*/
