/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:20:42 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/15 18:54:52 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	len_s1 = ft_strlen((char *) s1);
	while (ft_strchr(set, s1[len_s1]) && len_s1 != 0)
		len_s1--;
	return (ft_substr((char *)s1, 0, len_s1 + 1));
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set);

int main(void)
{
    char *s1 = "   Holaa papayinaa   ";
    char *set = " ";
    char *trimmed = ft_strtrim(s1, set);

    if (!trimmed)
    {
        printf("Error: failed to allocate memory.\n");
        return 1;
    }
    printf("Original string: \"%s\"\n", s1);
    printf("Set of characters to trim: \"%s\"\n", set);
    printf("Trimmed string: \"%s\"\n", trimmed);

    free(trimmed);
    return 0;
}*/
