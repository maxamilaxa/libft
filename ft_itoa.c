/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 13:23:26 by mkopiika          #+#    #+#             */
/*   Updated: 2018/12/14 13:23:45 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_maxi(int n)
{
	if (n == -2147483648)
		return (147483648);
	else if (n < 0)
		return (n * -1);
	return (n);
}

char			*ft_itoa(int n)
{
	int		nbr;
	int		i;
	char	*str;

	nbr = n;
	i = 1;
	while ((nbr = nbr / 10))
		i++;
	if (n < 0)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	nbr = 0;
	if (n < 0)
		str[nbr++] = '-';
	if (n == -2147483648)
		str[nbr++] = '2';
	n = ft_maxi(n);
	str[i] = '\0';
	while (--i >= nbr)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
