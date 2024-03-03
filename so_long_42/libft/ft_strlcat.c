/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:40:22 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/07 11:49:25 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize == 0 && (!dst || !src))
		return (0);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[] = "12341234";
    const char *src = "caracolaaaaa";

    size_t result = ft_strlcat(dest, src, -1);

    printf("Destination buffer: %s\n", dest);
    printf("Length of concatenated string: %lu\n", result);
   	return (0);
}
*/
