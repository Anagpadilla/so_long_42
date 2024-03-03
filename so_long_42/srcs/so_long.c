/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:26:08 by anagarc4          #+#    #+#             */
/*   Updated: 2023/08/21 17:15:26 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	leaks(void)
{
	system("leaks -q so_long");
}

int	endwindow(t_game game)
{
	(void)game;
	exit(EXIT_FAILURE);
	return (0);
}

int	main(int argc, char **argv)
{
	t_game	game;

	atexit(leaks);
	game = init_var(&game);
	if (argc != 2 || !ber_check(argv[1]))
		error('A');
	game.s_xpm.mlx_ptr = mlx_init();
	open_map(argv[1], &game);
	load(&game);
	mlx_loop_hook(game.s_xpm.mlx_ptr, draw_map, &game);
	mlx_hook(game.s_xpm.mlx_win, DESTROY, (1L << 17), endwindow, &game);
	mlx_key_hook(game.s_xpm.mlx_win, which_key, &game);
	mlx_loop(game.s_xpm.mlx_ptr);
	return (0);
}
