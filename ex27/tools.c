/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:02:30 by tvanessa          #+#    #+#             */
/*   Updated: 2019/09/04 14:50:41 by tvanessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (str)
		while (*str)
			ft_putchar(*str++);
}

void	ft_read_file(char *f, int bs)
{
	int		fd;
	int		ret;
	char	buf[bs + 1];

	if ((fd = open(f, O_RDONLY)) == -1)
		ft_putstr("Fail to open file.\n");
	else
	{
		while ((ret = read(fd, buf, bs)) != 0)
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		if (close(fd) == -1)
			ft_putstr("Fail to close file.\n");
	}
}
