/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:56:30 by anagarc4          #+#    #+#             */
/*   Updated: 2023/06/20 20:56:32 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	which_key(int pressed_key, t_game *game)
{
	char	*step;

	ft_printf("\033c\n");
	if (pressed_key == UP)
		press_up(game);
	else if (pressed_key == RIGHT)
		press_right(game);
	else if (pressed_key == LEFT)
		press_left(game);
	else if (pressed_key == DOWN)
		press_down(game);
	else if (pressed_key == ESC)
	{
		mlx_destroy_window(game->s_xpm.mlx_ptr, game->s_xpm.mlx_win);
		exit(EXIT_FAILURE);
	}
	else if (pressed_key < 0)
		exit(EXIT_FAILURE);
	step = ft_itoa(game->s_player.move);
	ft_printf("Movements:\n %s\n", step);
	free(step);
	return (0);
}

void	press_up(t_game *game)
{
	if (game->map[game->s_player.y - 1][game->s_player.x] == '0')
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y - 1][game->s_player.x] = 'P';
		game->s_player.y = game->s_player.y - 1;
		game->s_player.move++;
	}
	else if (game->map[game->s_player.y - 1][game->s_player.x] == 'C')
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y - 1][game->s_player.x] = 'P';
		game->s_player.y = game->s_player.y - 1;
		game->s_player.move++;
		game->things--;
	}
	else if (game->map[game->s_player.y - 1][game->s_player.x] == 'E'
			&& game->things == 0)
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y - 1][game->s_player.x] = 'P';
		game->s_player.y = game->s_player.y - 1;
		game->s_player.move++;
		win('W');
	}
}

void	press_down(t_game *game)
{
	if (game->map[game->s_player.y + 1][game->s_player.x] == '0')
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y + 1][game->s_player.x] = 'P';
		game->s_player.y = game->s_player.y + 1;
		game->s_player.move++;
	}
	else if (game->map[game->s_player.y + 1][game->s_player.x] == 'C')
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y + 1][game->s_player.x] = 'P';
		game->s_player.y = game->s_player.y + 1;
		game->s_player.move++;
		game->things--;
	}
	else if (game->map[game->s_player.y + 1][game->s_player.x] == 'E'
			&& game->things == 0)
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y + 1][game->s_player.x] = 'P';
		game->s_player.y = game->s_player.y + 1;
		game->s_player.move++;
		win('W');
	}
}

void	press_right(t_game *game)
{
	if (game->map[game->s_player.y][game->s_player.x + 1] == '0')
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y][game->s_player.x + 1] = 'P';
		game->s_player.x = game->s_player.x + 1;
		game->s_player.move++;
	}
	else if (game->map[game->s_player.y][game->s_player.x + 1] == 'C')
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y][game->s_player.x + 1] = 'P';
		game->s_player.x = game->s_player.x + 1;
		game->s_player.move++;
		game->things--;
	}
	else if (game->map[game->s_player.y][game->s_player.x + 1] == 'E'
			&& game->things == 0)
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y][game->s_player.x + 1] = 'P';
		game->s_player.x = game->s_player.x + 1;
		game->s_player.move++;
		win('W');
	}
}

void	press_left(t_game *game)
{
	if (game->map[game->s_player.y][game->s_player.x - 1] == '0')
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y][game->s_player.x - 1] = 'P';
		game->s_player.x = game->s_player.x - 1;
		game->s_player.move++;
	}
	else if (game->map[game->s_player.y][game->s_player.x - 1] == 'C')
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y][game->s_player.x - 1] = 'P';
		game->s_player.x = game->s_player.x - 1;
		game->s_player.move++;
		game->things--;
	}
	else if (game->map[game->s_player.y][game->s_player.x - 1] == 'E'
			&& game->things == 0)
	{
		game->map[game->s_player.y][game->s_player.x] = '0';
		game->map[game->s_player.y][game->s_player.x - 1] = 'P';
		game->s_player.x = game->s_player.x - 1;
		game->s_player.move++;
		win('W');
	}
}
