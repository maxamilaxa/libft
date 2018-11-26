/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:14:16 by mkopiika          #+#    #+#             */
/*   Updated: 2018/11/01 15:14:36 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hst, const char *ndl)
{
	int	i;
	int	j;

	i = 0;
	while (hst[i] != '\0')
	{
		j = 0;
		while (ndl[j] != '\0' && hst[i + j] == ndl[j])
			j++;
		if (ndl[j] == '\0')
			return ((char*)hst + i);
		i++;
	}
	if (ndl[0] == '\0')
		return ((char*)hst);
	return (0);
}
