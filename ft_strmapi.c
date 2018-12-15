/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 16:17:42 by mkopiika          #+#    #+#             */
/*   Updated: 2018/12/05 16:17:45 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	c;
	size_t	i;
	char	*dst;

	if (!s || !f)
		return (NULL);
	c = ft_strlen(s);
	dst = ft_strnew(c);
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < c)
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
