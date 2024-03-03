/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:52:12 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/04 11:40:59 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*tmp;

	tmp = (char *) s;
	len = ft_strlen(s);
	if (*(tmp + len) == (char) c)
		return (tmp + len);
	while (len--)
	{
		if (*(tmp + len) == (char) c)
			return (tmp + len);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	har str[50] = "I like avocado";
	char *result;

	result = ft_strchr(str, 'o');
	if (result == NULL)
		printf("The character 'o' was not found in the string.\n");
	else
    	printf("The character 'o' was found at position %ld.\n", result - str);
	return (0);
}
}*/
