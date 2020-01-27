/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:44:20 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/15 23:17:24 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		index;
	char		*ptr;
	char		*str;

	index = 0;
	ptr = (char *)dst;
	str = (char *)src;
	if (n == 0 || ptr == str)
		return (ptr);
	ptr = (char *)dst;
	str = (char *)src;
	while (n > 0 && str[index])
	{
		ptr[index] = str[index];
		index++;
		n--;
	}
	return (ptr);
}
