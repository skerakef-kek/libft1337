/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:08:02 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/19 02:32:26 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	i = 0;
	if (size == 0)
		return (src_len);
	if (size < dst_len)
		src_len += size;
	else
		src_len += dst_len;
	while (src[i] != '\0' && dst_len < size - 1 && dst != src)
	{
		dst[dst_len] = src[i];
		i++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (src_len);
}
