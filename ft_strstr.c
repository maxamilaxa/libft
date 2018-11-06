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

int		chek(char *str1, char *str2)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str2[i] != '\0')
	{
		if (str1[i] == str2[k])
			k++;
		i++;
	}
	if (k == i)
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if (chek(str, to_find) == 1)
			return (str);
		str++;
	}
	return (0);
}
