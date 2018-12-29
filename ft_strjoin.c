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

char				*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup((char*)s2));
	if (!s2)
		return (ft_strdup((char*)s1));
	if (!(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s1))
		*(str + i) = *(s1 + i);
	j = 0;
	while (j < ft_strlen(s2))
	{
		*(str + i++) = *(s2 + j);
		j++;
	}
	str[i] = '\0';
	return (str);
}
