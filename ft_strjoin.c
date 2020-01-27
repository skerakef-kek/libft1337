/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:20:10 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/20 19:05:56 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*dest;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	if (!(dest = (char *)malloc(sizeof(char) *
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		dest[i] = ((char *)s1)[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		dest[i + j] = ((char *)s2)[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
