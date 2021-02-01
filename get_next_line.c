/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:02:16 by thpham-v          #+#    #+#             */
/*   Updated: 2021/02/01 12:56:58 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_free(char *str)
{
	if (!str)
		return (0);
	free(str);
	return (0);
}

int		get_next_line(int fd, char **line)
{
	int			ret;
	static char	*temp;
	char		buff[BUFFER_SIZE + 1];

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	ret = 1;
	while (!ft_is_break_line(temp) && ret != 0)
	{
		if ((ret = read(fd, buff, BUFFER_SIZE)) == -1)
			return (-1);
		buff[ret] = '\0';
		temp = ft_strjoin(temp, buff);
	}
	if (!(*line = ft_get_line(temp)))
		return (-1);
	if (!(temp = ft_get_temp(temp)))
		return (-1);
	if (ret == 0)
	{
		ret = ft_free(temp);
		temp = NULL;
		return (0);
	}
	return (1);
}
