/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 12:50:14 by thpham-v          #+#    #+#             */
/*   Updated: 2021/02/01 12:52:03 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	*line;

	fd = 0;
	ret = 1;
	if (argc > 1)
		fd = open(argv[1], O_RDONLY);
	while (ret)
	{
		ret = get_next_line(fd, &line);
		printf("ret = %d  line = |%s|\n", ret, line);
		free(line);
	}
	return (0);
}
