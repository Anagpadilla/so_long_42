/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:25:21 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/14 19:38:59 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	if (!a && !b)
		return (0);
	while (n)
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Tuti";
    char str2[] = "Fruti";
    char str3[] = "Tuti";

    int result = ft_memcmp(str1, str2, strlen(str1) + 1);
    printf("Comparison result of str1 and str2: %d\n", result);

    result = ft_memcmp(str1, str3, strlen(str1) + 1);
    printf("Comparison result of str1 and str3: %d\n", result);

    return 0;
}
*/
