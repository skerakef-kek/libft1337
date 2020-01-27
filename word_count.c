/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:35:33 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/23 20:35:55 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				word_count(const char *ptr, char c)
{
	unsigned int		index;
	unsigned int		findit;
	unsigned int		num;

	num = 0;
	index = 0;
	findit = 0;
	while (ptr[index + 1] != '\0')
	{
		if (ptr[index] != c)
		{
			if (findit == 0)
			{
				num++;
				findit = 1;
			}
		}
		else
			findit = 0;
		index++;
	}
	return (num);
}
