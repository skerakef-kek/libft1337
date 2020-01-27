/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:28:18 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/19 02:04:22 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	char	*ptr;
	size_t	index;
	char	*str;

	str = (char *)s1;
	index = 0;
	s1_len = ft_strlen((char *)s1);
	if (!(ptr = (char *)malloc(sizeof(char) * s1_len + 1)))
		return (0);
	while (index < s1_len)
	{
		ptr[index] = str[index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
