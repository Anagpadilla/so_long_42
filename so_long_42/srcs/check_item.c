/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_item.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:09:57 by anagarc4          #+#    #+#             */
/*   Updated: 2023/08/21 17:17:01 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	extra_check(t_game *game)
{
	static int	line;
	static int	col;

	if (game->player != 1 || game->exit != 1 || game->things < 1)
		error('I');
	while (line < game->height - 1)
	{
		while (col < game->width)
		{
			if (game->map[line][col] != '1' && game->map[line][col] != '0'
				&& game->map[line][col] != '\0' && game->map[line][col] != 'E'
				&& game->map[line][col] != 'P' && game->map[line][col] != 'C')
				error('I');
			col++;
		}
		col = 0;
		line++;
	}
	line = 0;
}

void	find_position(int *x, int *y, t_game *game)
{
	*y = game->s_player.y;
	*x = game->s_player.x;
}

void	check_item(t_game *game, int y, int x)
{
	game->copy[y][x] = 'P';
	if (game->copy[y][x + 1] == '0' || game->copy[y][x + 1] == 'C')
		check_item(game, y, x + 1);
	if (game->copy[y][x - 1] == '0' || game->copy[y][x - 1] == 'C')
		check_item(game, y, x - 1);
	if (game->copy[y + 1][x] == '0' || game->copy[y + 1][x] == 'C')
		check_item(game, y + 1, x);
	if (game->copy[y - 1][x] == '0' || game->copy[y - 1][x] == 'C')
		check_item(game, y - 1, x);
}

void	path_check(t_game *game)
{
	int	line;
	int	col;

	line = 0;
	col = 0;
	while (line < game->height - 1)
	{
		col = 0;
		while (col < game->width)
		{
			if (game->copy[line][col] == 'C')
				error('P');
			col++;
		}
		line++;
	}
}

void	last_check(t_game *game)
{
	int	x;
	int	y;

	find_position(&x, &y, game);
	check_item(game, y, x);
	path_check(game);
}
