/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/05 16:44:21 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/02/03 11:15:05 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
