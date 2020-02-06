/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 16:42:29 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/02/06 15:37:23 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

int		get_next_line(int fd, char **line);
char	*shift_buffer(char *buffer, int n);
int		ft_strlen(char *s);
int		gnl_strlcpy(char *dst, char *src, int dstsize);
char	*gnl_strjoin(char *s1, char *s2, int n);
int		gnl_strchr(char *s, char c);

#endif
