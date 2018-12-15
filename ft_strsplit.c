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

int				ft_countofw(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s)
	{
		if (*s == 0 && *s != c)
			i++;
		else if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			i++;
		s++;
	}
	return (i);
}

size_t			ft_lenofs(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**buff;
	int		word;
	int		i;

	word = ft_countofw(s,c);
	i = 0;
	if (!(buff = (char**)malloc(sizeof(char*) * (word + 1))))
		return (NULL);
	if (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if(!(*buff = ft_strsub(s, 0, ft_lenofs(s, c))))
				return (NULL);
			while (*s && *s != c)
				s++;
		}
	}
	*buff = NULL;
	return (buff);
}