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

// size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t		dln;
// 	size_t		sln;


// 	sln = ft_strlen(src);
// 	if (dln > dstsize)
// 		dln = dstsize;
// 	else
// 		dln = ft_strlen(dst);
// 	while(*dst )
// 		dst++;
// 	while(*src && dstsize > dst && dstsize > 0)
// 	{	
// 		*dst = *src;
// 		dst++;
// 		src++;
// 	}
// 	*dst = '\0';
// 	return (sln + dln);
// }