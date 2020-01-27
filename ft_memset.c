/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:17:12 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/12 01:33:19 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	char			*ptr;
	unsigned char	s;

	index = 0;
	s = (unsigned char)c;
	ptr = b;
	while (index < len)
	{
		ptr[index] = c;
		index++;
	}
	return (ptr);
}
