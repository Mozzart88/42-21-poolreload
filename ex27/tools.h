/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:02:41 by tvanessa          #+#    #+#             */
/*   Updated: 2019/09/04 14:50:57 by tvanessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_read_file(char *file_name, int buf_size);

#endif
