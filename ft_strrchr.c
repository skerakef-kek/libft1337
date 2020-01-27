/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:54:26 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/19 02:47:10 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	if (c == '\0')
		return ((char *)s + ft_strlen((char *)s));
	while (*s)
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	return (p);
}
