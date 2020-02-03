/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 16:41:36 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/02/03 15:01:54 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>//weghalen

/*first_newline()
{

}*/

int		get_next_line(int fd, char **line)
{
	int iets;
	// hulpfunctie voor bepalen wanneer de eerst \n komt
	//first_newline();
	// static buffer
	// lees 1 keerr en sla op in buffer
	//zoek in buffer \n
	//gevonden? sla allse voor de \n op in result
	//zo nee, verder lezen
	//pas opnieuw lezen als buffer leeg is
	//result = malloc();
//	malloc de buffer aan characters;
	*line = malloc(sizeof(char));
//	ret = read(fd, ??, BUFFER_SIZE) ;
//	check of het is gelukt, zo niet, free;

	iets = read(fd, *line, BUFFER_SIZE);
	/* ssize_t read(int fildes, void *buf, size_t nbyte)
	 * read schrijft de SIZE gelezen characters uit fd op het scherm
	 * slaat hij de rest op in line?*/
	printf("# gelezen char: [%i]. ", iets);
	//printf("line is: [%s]\t", *line);
	return (1);
}
