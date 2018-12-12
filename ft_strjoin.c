/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 09:35:57 by mkopiika          #+#    #+#             */
/*   Updated: 2018/12/12 09:36:01 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	leni;
	size_t	lenj;

	if (!s1 || !s2)
		return (0);
	leni = ft_strlen(s1);
	lenj = ft_strlen(s2);
	str = ft_strnew(leni + lenj);
	if (!str)
		return (0);
	i = 0;
	while (i < leni)
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (j < lenj)
	{
		*(str + i++) = *(s2 + j);
		j++;
	}
	return (str);
}
