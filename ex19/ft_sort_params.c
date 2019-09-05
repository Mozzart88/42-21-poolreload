/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:33:47 by tvanessa          #+#    #+#             */
/*   Updated: 2019/09/04 13:41:04 by tvanessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void		ft_swap(char **s1, char **s2)
{
	char *ss;

	ss = *s1;
	*s1 = *s2;
	*s2 = ss;
}

char		**ft_sort(char **a)
{
	int		i;
	int		swd;

	i = 1;
	swd = 0;
	while (a[i])
	{
		if (a[i + 1])
		{
			if (ft_strcmp(a[i], a[i + 1]) > 0)
			{
				ft_swap(&a[i], &a[i + 1]);
				swd = 1;
			}
		}
		else if (swd == 1)
		{
			i = 0;
			swd = 0;
		}
		i++;
	}
	return (a);
}

int			main(int ac, char **av)
{
	int		i;
	char	**params;

	i = 1;
	if (ac > 0)
	{
		params = ft_sort(av);
		while (params[i])
		{
			while (*params[i])
				ft_putchar(*params[i]++);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
