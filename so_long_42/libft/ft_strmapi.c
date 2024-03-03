/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:21:06 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/26 15:48:08 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*solution;
	int		i;

	if (!s || !(*f))
		return (NULL);
	solution = ft_strdup(s);
	if (!solution)
		return (NULL);
	i = 0;
	while (solution[i])
	{
		solution[i] = f(i, solution[i]);
		i++;
	}
	return (solution);
}
/*
#include <stdio.h>
#include <stdlib.h>

char	ft_my_map(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c + 1);
	else
		return (c - 1);
}

int		main(void)
{
	char	*str = "Avocadoo kIWII!";
	char	*new_str;

	new_str = ft_strmapi(str, ft_my_map);
	if (new_str)
	{
		printf("Original string: %s\n", str);
		printf("Mapped string: %s\n", new_str);
		free(new_str);
	}
	return (0);
}
*/
