/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 02:08:52 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/20 15:59:23 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_set(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;
	size_t	end;

	start = 0;
	i = 0;
	end = ft_strlen((char *)s1) - 1;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (*s1 == '\0')
		return (ft_strdup(""));
	while (check_set(set, s1[start]))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	while (check_set(set, s1[end]))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}
