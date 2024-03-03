/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:15:52 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/10 14:16:04 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	*ft_strchrr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (!s[i])
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}

char	*getstatic(int fd, char *box)
{
	char	*buf;
	int		nr_bytes;

	if (!box)
		box = ft_calloc(sizeof(char), BUFFER_SIZE);
	buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	nr_bytes = 1;
	while (!ft_strchrr(buf, '\n') && nr_bytes != 0)
	{
		nr_bytes = read(fd, buf, BUFFER_SIZE);
		if (nr_bytes == -1)
		{
			free(buf);
			free(box);
			return (NULL);
		}
		buf[nr_bytes] = '\0';
		box = ft_strjjoin(box, buf);
	}
	free(buf);
	return (box);
}

char	*ft_getline(char *box)
{
	char	*linea;
	int		i;

	i = 0;
	linea = NULL;
	if (!box[i])
		return (NULL);
	if (ft_strchrr(box, '\n'))
	{
		while (box[i] != '\n')
			i++;
		linea = ft_susbstr(box, 0, i + 1);
		return (linea);
	}
	linea = ft_strdup(box);
	return (linea);
}

char	*cleaner(char *box)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	j = 0;
	while (box[i] != '\n' && box[i] != '\0')
		i++;
	if (!box[i])
	{
		free(box);
		return (NULL);
	}
	copy = ft_calloc(sizeof(char), ft_strlen(box) - i + 1);
	if (!copy)
		return (NULL);
	i++;
	while (box[i])
		copy[j++] = box[i++];
	free(box);
	return (copy);
}

char	*get_next_line(int fd)
{
	char		*linea;
	static char	*box;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	box = getstatic(fd, box);
	if (!box)
		return (NULL);
	linea = ft_getline(box);
	box = cleaner(box);
	return (linea);
}
