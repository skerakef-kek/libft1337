/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:48:43 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/22 17:05:44 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		hssab;

	if (size == 0)
		return (ft_strlen((char *)src));
	if (!src)
		return (0);
	hssab = 0;
	while (size > 1 && *src)
	{
		*dest = *src;
		++dest;
		++src;
		--size;
		++hssab;
	}
	*dest = '\0';
	while (*dest || *src)
	{
		if (*src)
		{
			++src;
			++hssab;
		}
	}
	return (hssab);
}
