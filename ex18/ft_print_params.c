/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:25:17 by tvanessa          #+#    #+#             */
/*   Updated: 2019/09/03 20:31:41 by tvanessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 0)
	{
		while (av[i])
		{
			while (*av[i])
				ft_putchar(*av[i]++);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
