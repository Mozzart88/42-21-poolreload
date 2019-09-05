/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:02:13 by tvanessa          #+#    #+#             */
/*   Updated: 2019/09/04 14:50:21 by tvanessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("File name missing.\n");
	if (ac > 2)
		ft_putstr("Too many arguments.\n");
	if (ac == 2)
	{
		ft_read_file(av[1], 1);
	}
	return (0);
}
