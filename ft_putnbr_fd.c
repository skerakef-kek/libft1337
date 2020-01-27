/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 09:43:15 by ztaouil           #+#    #+#             */
/*   Updated: 2019/10/19 02:08:49 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	long int	l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd(('-'), fd);
		l = -l;
	}
	if (l > 9)
	{
		ft_putnbr_fd((l / 10), fd);
		ft_putnbr_fd((l % 10), fd);
	}
	else
		ft_putchar_fd((l + '0'), fd);
}
