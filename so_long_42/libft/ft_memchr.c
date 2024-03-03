/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:10:07 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/14 19:30:23 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *) str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hola caracola";
	char *ptr;

	ptr = ft_memchr(str, 'r', strlen(str));

	if (ptr == NULL)
		printf("Character not found.\n");
	else
		printf("Character found at position %ld.\n", ptr - str);
}
*/
