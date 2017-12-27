/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:07:30 by tmerli            #+#    #+#             */
/*   Updated: 2017/11/07 14:51:57 by tmerli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char	buf[501];

	fd = open(argv[1], O_RDONLY);
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		while ((ret = read(fd, buf, 500)))
			write(1, buf, ret);
		write(1, buf, ret);
	}
	return (0);
}
