/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 16:06:29 by tvanessa          #+#    #+#             */
/*   Updated: 2019/09/03 16:51:44 by tvanessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int a;
	int res;

	a = 0;
	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (++a <= nb)
		res *= a;
	return (res);
}
