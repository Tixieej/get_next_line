/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 16:57:03 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/02/06 16:11:42 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int		main(void)
{
	int		fd;
	char	*line;
	int		result;

	fd = open("test.txt", O_RDONLY);
	result = 1;
	while (result == 1)
	{
		printf("voor: fd = %i \t Line = [%s]\n", fd, line);
		result = get_next_line(fd, &line);
		printf(" [%i]--->| Line: %s\n", result, line);
		free(line);
	}
	return (0);
}
