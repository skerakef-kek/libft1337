/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 08:50:58 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/14 13:16:22 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr_fd(char *ptr, int fd)
{
	int		index;

	index = 0;
	while (ptr[index] != '\0')
	{
		ft_putchar_fd(ptr[index], fd);
		index++;
	}
}
