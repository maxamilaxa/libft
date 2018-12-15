/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:54:06 by mkopiika          #+#    #+#             */
/*   Updated: 2018/11/14 17:54:09 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *hst, const char *ndl, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (hst[i] != '\0' && i < len)
	{
		j = 0;
		while (ndl[j] != '\0' && hst[i + j] == ndl[j] && i < len)
			j++;
		if (ndl[j] == '\0')
			return ((char*)hst + i);
		i++;
		len--;
	}
	if (ndl[0] == '\0')
		return ((char*)hst);
	return (0);
}
