/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:41:56 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/15 16:31:24 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(void)
{
	char str[50] = "I need hollidays";
	printf("Before memset: %s\n", str);

	ft_memset(str + 4, 'X', 5);
	printf("After memset: %s\n", str);

	return (0);
}*/
