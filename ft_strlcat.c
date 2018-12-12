/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:15:00 by mkopiika          #+#    #+#             */
/*   Updated: 2018/11/13 15:15:05 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char *s1;
	char *s2;

	int i;
	int j;
	s1 = (char*)dst;
	s2 = (char*)src;
	i = 0;
	while (s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
	{
		j = 0;
		while(s2[j] != '\0' && dstsize > 0)
		{
			s1[i] = s1[i] + s2[j];
			j++;
			dstsize--;
		}
	}
	return (dstsize);
}