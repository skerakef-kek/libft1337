/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:35:53 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/19 02:04:41 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	index;
	char			*str;

	str = (char *)s;
	index = 0;
	if (!s)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(str) + 1);
	if (ptr == NULL)
		return (NULL);
	while (str[index])
	{
		ptr[index] = (f)(index, str[index]);
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
