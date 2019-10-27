/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkraszew <kkraszew@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:27:52 by kkraszew          #+#    #+#             */
/*   Updated: 2019/10/14 17:27:52 by kkraszew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_display_file(int fd)
{
	char	buf[BUF_SIZE + 1];

	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
}

int		main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	ft_display_file(fd);
	close(fd);
	return (0);
}
