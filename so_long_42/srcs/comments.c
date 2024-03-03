/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comments.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:26:33 by anagarc4          #+#    #+#             */
/*   Updated: 2023/06/22 15:26:35 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	error(char c)
{
	if (c == 'N')
		ft_printf("ERROR: The map archive is not .ber\n");
	else if (c == 'L')
		ft_printf("ERROR: Not all the lines are the same len\n");
	else if (c == 'C')
		ft_printf("ERROR: The map is not properly closed\n");
	else if (c == 'I')
		ft_printf("ERROR: There is at least one invalid char\n");
	else if (c == 'P')
		ft_printf("ERROR: Invalid Path\n");
	else if (c == 'D')
		ft_printf("ERROR: There is an empty line\n");
	else if (c == 'A')
		ft_printf("ERROR: Invalid number of arguments\n");
	else if (c == 'X')
		ft_printf("ERROR: Load xpm image\n");
	exit(EXIT_FAILURE);
	return (0);
}

int	win(char c)
{
	if (c == 'W')
	{
		ft_printf("Congratulations!, you won the game :)\n");
		exit(EXIT_SUCCESS);
	}
	return (0);
}
