/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:29:13 by mkopiika          #+#    #+#             */
/*   Updated: 2018/11/26 13:30:29 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;
	size_t c;

	c = 0;
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str != '\0')
		{
			while (size > c)
				size--;
			return (str = 0);
		}
	return (0);
}