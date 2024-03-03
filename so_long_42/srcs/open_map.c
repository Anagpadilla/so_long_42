/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:51:31 by anagarc4          #+#    #+#             */
/*   Updated: 2023/06/20 15:51:35 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	read_map(char *argv, t_game *game)
{
	char	*line;
	char	*temp;
	int		fd;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
		exit(1);
	line = get_next_line(fd);
	game->width = ft_strlen(line) - 1;
	temp = ft_strdup("");
	while (line)
	{
		temp = ft_strjoin(temp, line);
		free(line);
		line = get_next_line(fd);
		if (line && strlen(line) == 1 && *line == '\n')
			error('D');
		game->height++;
	}
	free(line);
	game->map = ft_split(temp, '\n');
	game->copy = ft_split(temp, '\n');
	free(temp);
}

void	process_map(t_game *game)
{
	len_check(game);
	inside_check(game);
	corner_check(game);
	extra_check(game);
	last_check(game);
}

void	open_map(char *argv, t_game *game)
{
	read_map(argv, game);
	process_map(game);
}
