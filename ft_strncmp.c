/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:17:37 by mkopiika          #+#    #+#             */
/*   Updated: 2018/11/01 15:17:48 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (n == 0)
		return(0);
	while (s1[i] != '\0' && (s1[i] == s2[j]) && n > 0)
		{
			i++;
			j++;
			n--;
		}
		// if ((s1[i] > s2[j]) || (s1[i] < s2[j]))
	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}