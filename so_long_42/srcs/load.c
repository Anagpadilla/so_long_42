/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:02:27 by anagarc4          #+#    #+#             */
/*   Updated: 2023/08/21 17:12:13 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	load_images(t_game *game)
{
	int	a;
	int	b;

	game->s_xpm.i_floor = mlx_xpm_file_to_image(game->s_xpm.mlx_ptr,
			"./img/floor.xpm", &a, &b);
	game->s_xpm.i_dino = mlx_xpm_file_to_image(game->s_xpm.mlx_ptr,
			"./img/dino.xpm", &a, &b);
	game->s_xpm.i_beer = mlx_xpm_file_to_image(game->s_xpm.mlx_ptr,
			"./img/beer2.xpm", &a, &b);
	game->s_xpm.i_tree = mlx_xpm_file_to_image(game->s_xpm.mlx_ptr,
			"./img/tree.xpm", &a, &b);
	game->s_xpm.i_off = mlx_xpm_file_to_image(game->s_xpm.mlx_ptr,
			"./img/churchnight.xpm", &a, &b);
	game->s_xpm.i_on = mlx_xpm_file_to_image(game->s_xpm.mlx_ptr,
			"./img/churchday.xpm", &a, &b);
	if (!game->s_xpm.i_floor || !game->s_xpm.i_dino || !game->s_xpm.i_beer
		|| !game->s_xpm.i_tree || !game->s_xpm.i_off || !game->s_xpm.i_on)
	{
		error('X');
	}
}

void	initialize_window(t_game *game)
{
	game->s_xpm.mlx_win = mlx_new_window(game->s_xpm.mlx_ptr, (game->width)
			* 64, (game->height) * 64, "So_long");
}

void	load(t_game *game)
{
	initialize_window(game);
	load_images(game);
}
