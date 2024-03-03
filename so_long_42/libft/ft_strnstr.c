/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:19:59 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/07 11:18:17 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0 && (!str || !to_find))
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *) str);
	i = 0;
	while (str[i] && (size_t)i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while ((i + j < len) && (str[i + j] == to_find[j]))
			{
				if (to_find[j + 1] == '\0')
					return ((char *) &str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    const char *str = "I need hollidays";
    const char *to_find = "ho";
    size_t len = 16;

    char *result = ft_strnstr(str, to_find, len);

    if (result)
    {
        printf("To_find: '%s' / str: '%s'\n", to_find, str);
        printf("The substring starts:w
	   	at index %ld\n", result - str);
    }
    else
    {
        printf("Could not find '%s' in '%s'\n", to_find, str);
    }
    return (0);
}	*/		
