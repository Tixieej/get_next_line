/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_bonus.h                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/10 14:15:45 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/02/20 09:07:20 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

int		get_next_line(int fd, char **line);
void	shift_buffer(char *buffer, int n);
int		read_till_end(int fd, char **line, char *buffer, int *ret);
int		ft_strlen(char *s);
char	*gnl_strcpy(char *join, char *s1, char *s2);
char	*gnl_strjoin(char *s1, char *s2, int n);
int		gnl_strchr(char *s, char c);

#endif
