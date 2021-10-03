/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:57:13 by mhirabay          #+#    #+#             */
/*   Updated: 2021/10/03 17:53:32 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(long nb, int fd)
{
	long	num;

	num = nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		num = num * -1;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		num = num % 10;
	}
	if (num < 10)
	{
		ft_putchar_fd('0' + num, fd);
	}
}
