/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 14:45:54 by mkopiika          #+#    #+#             */
/*   Updated: 2018/12/18 14:45:56 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	
	while (*alst == NULL || alst == NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		ft_memdel((*alst)->content);
	}
	*alst = NULL;
}
