/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:58:49 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 19:52:54 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t destlen)
{
	size_t	i;
	size_t	x;

	x = ft_strlen(src);
	i = 0;
	if (destlen != 0)
	{
		while ((src[i] != '\0') && (i < (destlen -1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Hello, world!";
	char dest[6];
	size_t len = ft_strlcpy(dest, src, sizeof(dest));

	printf("Source string: %s\n", src);
	printf("Destination string: %s\n", dest);
	printf("Length of copied string: %zu\n", len);

	return (0);
}
*/
