/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 23:03:30 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/20 06:14:15 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *s1, const void *s2, size_t len)
{
	size_t					index;
	unsigned char			*ptr;
	const unsigned char		*str;

	if (!s1 && !s2)
		return (NULL);
	ptr = (unsigned char *)s1;
	str = (unsigned char *)s2;
	index = 0;
	if (str < ptr)
		while (++index <= len)
			ptr[len - index] = str[len - index];
	else
		while (len-- > 0)
			*(ptr++) = *(str++);
	return (s1);
}
