/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:33:18 by mkopiika          #+#    #+#             */
/*   Updated: 2018/11/01 15:34:14 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_ifsim(const char sim)
{
	if (sim == '\t' || sim == ' ' || sim == '\n' || sim == '\v' ||
				sim == '\f' || sim == '\r')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	unsigned long int	num;
	int					m;

	num = 0;
	m = 1;
	while (*str && ft_ifsim(*str))
	{
		str++;
	}
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			m = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	if (num > 4294967295 && m == -1)
		return (0);
	else if (num > 4294967295 && m == 1)
		return (-1);
	return (num * m);
}
