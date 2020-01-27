/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:43:29 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/21 16:31:19 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		index;
	char		*substr;

	if (!s)
		return (NULL);
	if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	index = 0;
	if (!(start > ft_strlen(s)))
	{
		while (index < len && s[start + index])
		{
			substr[index] = s[start + index];
			index++;
		}
	}
	substr[index] = '\0';
	return (substr);
}
