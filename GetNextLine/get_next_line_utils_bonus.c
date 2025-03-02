/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nposidon <nposidon@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 17:12:59 by nposidon          #+#    #+#             */
/*   Updated: 2021/12/24 17:13:03 by nposidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	fd_len(t_list *a)
{
	int		i;
	int		len;

	len = 0;
	while (a != 0)
	{
		i = 0;
		while (i < a->len && (a->text)[i] != '\n')
			i++;
		len += i;
		if (a->len == 0 )
			return (len);
		if (i < a->len && (a->text)[i] == '\n')
			return (++len);
		a = a->next;
	}
	return (-1);
}
