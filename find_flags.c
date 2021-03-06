/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:13:30 by averemiy          #+#    #+#             */
/*   Updated: 2018/05/05 17:06:27 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

int					find_flags(char *str, t_spe **t)
{
	int				i;

	i = 0;
	while (str[i] == '+' || str[i] == '-' || str[i] == '0'
			|| str[i] == ' ' || str[i] == '#')
	{
		if (str[i] == '+')
			(*t)->plus = 1;
		if (str[i] == '-')
			(*t)->minus = 1;
		if (str[i] == '0')
			(*t)->zero = 1;
		if (str[i] == ' ')
			(*t)->space = 1;
		if (str[i] == '#')
			(*t)->hash = 1;
		i++;
	}
	return (i);
}
