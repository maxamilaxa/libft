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

static int			ft_cmp(const char *h, const char *n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (n[j] != '\0' && h[i] != '\0')
	{
		if (h[i] == n[j])
			j++;
		i++;
	}
	if (i == j)
		return (1);
	return (0);
}

char				*ft_strstr(const char *hst, const char *ndl)
{
	if (!*ndl)
		return ((char*)hst);
	while (*hst != '\0')
	{
		if (ft_cmp(hst, ndl) == 1)
			return ((char*)hst);
		hst++;
	}
	if (*ndl == '\0')
		return ((char*)hst);
	return (NULL);
}
