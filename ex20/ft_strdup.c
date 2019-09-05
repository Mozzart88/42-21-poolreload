/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 22:18:52 by tvanessa          #+#    #+#             */
/*   Updated: 2019/09/03 22:37:07 by tvanessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strdup(char *src)
{
	char	*ret;
	int		l;
	int		i;

	i = 0;
	l = ft_strlen(src);
	ret = NULL;
	if (src)
		ret = (char*)malloc(sizeof(char) * l + 1);
	if (ret)
	{
		while (src[i])
		{
			ret[i] = src[i];
			i++;
		}
		ret[i] = '\0';
	}
	return (ret);
}
