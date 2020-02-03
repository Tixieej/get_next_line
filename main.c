/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 16:57:03 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/02/03 13:58:04 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int		main()
{
	int		fd;
	char	*line;
	int		result;

	fd = open("test.txt", O_RDONLY);
	result = 1;
	printf("fd = %i\t", fd);
	if (result == 1)
	{
		result = get_next_line(fd, &line);
		printf("\n[%i]--->|", result);
		printf(" Line: %s\n", line);
		free(line);
	}
	return (0);
}
