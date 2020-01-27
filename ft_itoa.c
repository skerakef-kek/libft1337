/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 07:59:35 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/20 16:05:33 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(long int nbr)
{
	int			len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int			i;
	char		*ptr;
	long int	nv;

	nv = (long int)n;
	i = nbr_len(nv);
	if (!(ptr = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ptr[i--] = '\0';
	if (nv == 0)
		ptr[i] = '0';
	if (nv < 0)
	{
		ptr[0] = '-';
		nv = -nv;
	}
	while (nv > 0)
	{
		ptr[i] = '0' + (nv % 10);
		nv = nv / 10;
		i--;
	}
	return (ptr);
}
