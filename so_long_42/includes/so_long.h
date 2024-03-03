/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:37:02 by anagarc4          #+#    #+#             */
/*   Updated: 2023/06/11 01:37:04 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include <fcntl.h>
# include <math.h>
# include <mlx.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define BUFFER_SIZE 42

// GNL //
char			*get_next_line(int fd);
char			*ft_susbstr(char *s, unsigned int start, size_t len);
char			*ft_strdup(const char *s1);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strchrr(char *s, int c);
char			*ft_strjjoin(char *s1, char *s2);

// STRUCTS //

typedef struct s_player
{
	int			x;
	int			y;
	int			move;
}				t_player;

typedef struct s_xpm
{
	void		*mlx_ptr;
	void		*mlx_win;
	void		*i_tree;
	void		*i_off;
	void		*i_beer;
	void		*i_dino;
	void		*i_floor;
	void		*i_on;
}				t_xpm;

typedef struct s_game
{
	char		**map;
	char		**copy;
	int			height;
	int			width;
	int			things;
	int			player;
	int			exit;
	t_xpm		s_xpm;
	t_player	s_player;

}				t_game;

enum
{
	MAXWIDTH = 5120,
	MAXHEIGHT = 2880
};

// KEYS //
# define UP 13
# define DOWN 1
# define LEFT 0
# define RIGHT 2
# define ESC 53
# define DESTROY 17

void			press_up(t_game *game);
void			press_down(t_game *game);
void			press_right(t_game *game);
void			press_left(t_game *game);

// FUNCTIONS //
void			open_map(char *argv, t_game *game);
t_game			init_var(t_game *game);
int				ber_check(char *name);
void			load(t_game *game);
void			load_images(t_game *game);
void			initialize_window(t_game *game);
int				draw_map(t_game *game);
void			verify_img(t_game *game, int i, int j);
void			put_floor_image(t_game *game, int i, int j);
void			put_object_image(t_game *game, int i, int j, char object);
t_game			*len_check(t_game *game);
t_game			*corner_check(t_game *game);
int				which_key(int pressed_key, t_game *game);

t_game			*inside_check(t_game *game);
int				error(char c);
void			extra_check(t_game *game);
void			last_check(t_game *game);
void			find_position(int *x, int *y, t_game *game);
void			check_item(t_game *game, int y, int x);
void			path_check(t_game *game);
int				win(char c);
//int				endwindow(t_game game);
#endif
