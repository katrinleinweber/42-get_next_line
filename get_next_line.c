/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 22:12:30 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/30 14:59:09 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(const int fd, char **line)
{
	int prev_offset;
	int curr_position;
	int *buff;

	buff = ft_newstr(BUFF_SIZE);
	prev_offset = lseek(fd, 0, SEEK_CUR);
	while ((ret = read(fd, buff, BUFF_SIZE)))
	{
		while (buff[i] != 0 || )
		curr_position += ret;

	}
	return (0)
}

