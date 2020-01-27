/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:19:25 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/19 02:22:07 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t				index;
	unsigned char		*p1;
	unsigned char		*p2;

	index = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (index < n)
	{
		p1[index] = p2[index];
		if (p1[index] == (unsigned char)c)
			return ((void *)(s1 + index + 1));
		index++;
	}
	return (NULL);
}
