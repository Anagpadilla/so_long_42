/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:33:18 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/26 16:00:53 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

void	ft_mymap(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = *c + 1;
	else
		*c = *c - 1;
}

int		main(void)
{
	char	str[] = "Apple Banana Mango";

	ft_striteri(str, ft_mymap);
	printf("Iterated string: %s\n", str);
	return (0);
}
*/