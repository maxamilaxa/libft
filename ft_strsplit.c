/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 11:08:59 by mkopiika          #+#    #+#             */
/*   Updated: 2018/12/12 11:09:01 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countofw(char const *str, char c)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str != c)
			i++;
		while (*str && *str == c)
			str++;
		while (*str && *str != c)
			str++;
	}
	return (i);
}

int		ft_lenofw(char const *str, char c)
{
	int		ln;

	ln = 0;
	while (*str && *str != c)
	{
		ln++;
		str++;
	}
	return (ln);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**buff;
	int		word;
	int		i;

	word = ft_countofw(s,c);
	i = 0;
	buff = (char**)malloc(sizeof(char*) * (word + 1));
	if (!buff)
		return (0);

	buff[i] = NULL;
	return (buff);
}