/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:15:02 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 19:43:29 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (*str != '\0')
	{
		str++;
		c++;
	}
	return (c);
}
/*
#include <stdio.h>

int	main()
{
	char *str = "Hello, worlid!";
	int len = ft_strlen(str);
	printf("Length of string '%s' is %d\n", str, len);
	return (0);
}
*/
