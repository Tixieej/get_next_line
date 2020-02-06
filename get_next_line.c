/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 16:41:36 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/02/06 16:11:37 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

#include <stdio.h>
char	*shift_buffer(char *buffer, int n)
{
	int i;

	i = 0;
	while (n + i < BUFFER_SIZE)
	{
		buffer[i] = buffer[n + i];
		i++;
	}
	while (i < BUFFER_SIZE)
	{
		buffer[i] = '\0';
		i++;
	}
	return (buffer);
}

int		get_next_line(int fd, char **line)
{
	static char buffer[BUFFER_SIZE + 1];
	int			ret;
	int			pos;

	ret = 1;
	*line = malloc(1);
	if (!(*line))
		return (-1);
	**line = '\0';
	if (*buffer == '\0')
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret == -1)
			return (-1);
	}
	//printf("ret = %i\n", ret);
	while (gnl_strchr(buffer, '\n') == -1 && ret != 0)
	{
		*line = gnl_strjoin(*line, buffer, BUFFER_SIZE);
		ret = read(fd, buffer, BUFFER_SIZE);
		buffer[ret] = '\0';
	}
	pos = gnl_strchr(buffer, '\n');
	*line = gnl_strjoin(*line, buffer, pos);
	shift_buffer(buffer, pos + 1);
	if (ret == 0)
		return (0);
	return (1);
}
