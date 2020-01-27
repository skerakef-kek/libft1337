/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:35:44 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/20 06:14:31 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t		index;
	char		*p;

	index = 0;
	p = (void *)s;
	while (index < n)
	{
		if (p[index] == (char)c)
			return (&p[index]);
		index++;
	}
	return (NULL);
}
