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

static int			ft_countofw(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
			i++;
		while (*s != c && *s != '\0')
			s++;
		while (*s == c && *s != '\0')
			s++;
	}
	return (i);
}

static	size_t		ft_lenofs(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**buff;
	char	**ret;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(buff = (char**)malloc(sizeof(char*) * (ft_countofw(s, c) + 1))))
		return (NULL);
	ret = buff;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(*buff = ft_strsub(s, 0, ft_lenofs(s, c))))
				return (NULL);
			buff++;
		}
		while (*s && *s != c)
			s++;
	}
	*buff = NULL;
	return (ret);
}
