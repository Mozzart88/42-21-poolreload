/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 22:38:34 by tvanessa          #+#    #+#             */
/*   Updated: 2019/09/03 23:02:12 by tvanessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*ret;
	int	i;

	i = 0;
	ret = NULL;
	if (max <= min)
		return (ret);
	ret = (int*)malloc(sizeof(int) * (max - min) + 1);
	if (ret)
	{
		while (min < max)
		{
			ret[i] = min;
			min++;
			i++;
		}
		ret[i] = (int)NULL;
	}
	return (ret);
}
