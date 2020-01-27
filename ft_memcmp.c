/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:44:04 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/19 02:42:24 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*p1;
	const unsigned char		*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	if (n)
		while (n--)
			if (*p1++ != *p2++)
				return (*(--p1) - *(--p2));
	return (0);
}
