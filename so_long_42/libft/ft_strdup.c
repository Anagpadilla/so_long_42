/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:16:32 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/15 16:09:04 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = "Mangoo Kiwii";
    char *copy= ft_strdup(str);

    if (copy == NULL)
    {
        printf("Failed to allocate memory.\n");
        return (1);
    }

    printf("The original string is: %s\n", str);
    printf("The copied string is: %s\n", copy);

    free(copy);
    return (0);
}

*/
