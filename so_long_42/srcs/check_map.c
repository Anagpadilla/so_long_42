/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:08:00 by anagarc4          #+#    #+#             */
/*   Updated: 2023/06/20 15:51:05 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

t_game	init_var(t_game *game)
{
	game->s_player.x = 0;
	game->s_player.y = 0;
	game->s_player.move = 0;
	game->things = 0;
	game->exit = 0;
	game->player = 0;
	game->height = 0;
	game->width = 0;
	return (*game);
}

int	ber_check(char *name)
{
	if (ft_strnstr(name + (ft_strlen(name) - 4), ".ber", 4) == 0)
		error ('N');
	return (1);
}

t_game	*len_check(t_game *game)
{
	int	line;
	int	col;

	line = 0;
	while (line < game->height)
	{
		col = 0;
		while (game->map[line][col] != '\0')
			col++;
		if (col != game->width)
			error('L');
		line++;
	}
	return (game);
}

t_game	*corner_check(t_game *game)
{
	int	line;
	int	col;

	line = 0;
	while (line < game->height - 1)
	{
		col = 0;
		while (col < game->width)
		{
			if (game->map[0][col] != '1')
				error('C');
			if (game->map[game->height - 1][col] != '1')
				error('C');
			if (game->map[line][0] != '1')
				error('C');
			if (game->map[line][game->width - 1] != '1')
				error('C');
			col++;
		}
		line++;
	}
	return (game);
}

t_game	*inside_check(t_game *game)
{
	static int	line;
	static int	col;

	while (line < game->height - 1)
	{
		while (col < game->width - 1)
		{
			if (game->map[line][col] == 'P')
			{
				game->player++;
				game->s_player.y = line;
				game->s_player.x = col;
			}
			else if (game->map[line][col] == 'E')
				game->exit++;
			else if (game->map[line][col] == 'C')
				game->things++;
			col++;
		}
		col = 0;
		line++;
	}
	line = 0;
	return (game);
}
