/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndidenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:37:04 by ndidenko          #+#    #+#             */
/*   Updated: 2018/02/20 19:37:07 by ndidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10000
# define FD_MAX 4096

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int	get_next_line(const int fd, char **line);
#endif
