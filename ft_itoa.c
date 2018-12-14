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

int 	ft_lenofi(int n)
{
	int	r;

	r = 0;
	while (n)
	{
		r++;
		n /= 10;
	}
	if (n <= 0)
		r++;
	else
		r++;
	return (r);

}

static char	*ft_itoa_wr(int n, int d, char *r)
{
	int		n1;

	n1 = n;
	while (n / d == 0 && n != 0)
		d /= 10;
	while (d && n != 0)
	{
		if (n > 0)
			*r = (char)((n1 / d) + '0');
		else
			*r = (char)(((n1 / d) * (-1)) + '0');
		n1 -= (n1 / d) * d;
		r++;
		d /= 10;
	}
	return (r);
}

char		*ft_itoa(int n)
{
	char	*new;
	char	*buff;
	int		d;

	new = ft_strnew(ft_lenofi(n));
	if (!new)
		return (NULL);
	buff = r;
	d = 1000000000;
	if (n == 0)
		*new = '0';
	if (n < 0)
		r++[0] = '-';
	new = ft_itoa_wr(n, d, r);
	return (buff);
}
