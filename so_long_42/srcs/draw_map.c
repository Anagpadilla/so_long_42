/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:51:19 by anagarc4          #+#    #+#             */
/*   Updated: 2023/06/20 15:51:21 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	draw_map(t_game *game)
{
	static int	i;
	static int	j;

	i = 0;
	while (i < game->height)
	{
		j = 0;
		while (j < game->width)
		{
			verify_img(game, i, j);
			j++;
		}
		i++;
	}
	return (0);
}

void	put_floor_image(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->s_xpm.mlx_ptr, game->s_xpm.mlx_win,
		game->s_xpm.i_floor, j * 64, i * 64);
}

void	put_object_image(t_game *game, int i, int j, char object)
{
	if (object == '1')
	{
		mlx_put_image_to_window(game->s_xpm.mlx_ptr, game->s_xpm.mlx_win,
			game->s_xpm.i_tree, j * 64, i * 64);
	}
	else if (object == 'P')
	{
		mlx_put_image_to_window(game->s_xpm.mlx_ptr, game->s_xpm.mlx_win,
			game->s_xpm.i_dino, ((j * 64) + 16), ((i * 64) + 16));
	}
	else if (object == 'C')
	{
		mlx_put_image_to_window(game->s_xpm.mlx_ptr, game->s_xpm.mlx_win,
			game->s_xpm.i_beer, ((j * 64) + 16), ((i * 64) + 16));
	}
	else if (object == 'E')
	{
		mlx_put_image_to_window(game->s_xpm.mlx_ptr, game->s_xpm.mlx_win,
			game->s_xpm.i_off, j * 64, i * 64);
		if (game->things == 0)
		{
			mlx_put_image_to_window(game->s_xpm.mlx_ptr, game->s_xpm.mlx_win,
				game->s_xpm.i_on, j * 64, i * 64);
		}
	}
}

void	verify_img(t_game *game, int i, int j)
{
	char	object;

	object = game->map[i][j];
	put_floor_image(game, i, j);
	if (object == '0' || object == '1' || object == 'P' || object == 'C'
		|| object == 'E')
	{
		put_object_image(game, i, j, object);
	}
}
