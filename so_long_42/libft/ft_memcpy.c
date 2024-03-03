/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:27:17 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/14 19:33:44 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	if (!dest && ! src)
		return (0);
	a = dest;
	b = src;
	while (n-- > 0)
	{
		*a = *b;
		a++;
		b++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str1[] = "Mango";
    char str2[] = "Avocado";
    char *result = (char*)malloc(sizeof(str1));

    printf("Before memcpy:\n");
    printf("Result: %s\n", result);
   	result = ft_memcpy(result, str1, strlen(str1) + 1); 
	result = ft_memcpy(result + strlen(str1), str2, strlen(str2) + 1); 
    printf("After memcpy:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("result: %s\n", result);

    return 0;
}*/
