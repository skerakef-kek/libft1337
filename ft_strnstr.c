/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:13:12 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/19 02:42:49 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		n_len;

	n_len = ft_strlen((char *)needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len-- >= n_len)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, n_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
