/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 23:13:38 by lhermann          #+#    #+#             */
/*   Updated: 2016/11/02 23:16:32 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		ret;
	int		fd;
	char	buf[BUF_SIZE + 1];

	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	if (argv[1] == '\0')
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	close(fd);
	return (0);
}
