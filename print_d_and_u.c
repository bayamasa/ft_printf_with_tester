/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_and_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:54:31 by masashi           #+#    #+#             */
/*   Updated: 2021/09/13 15:06:57 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d_and_u(long nb, int digits)
{
	long	num;

	num = nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		num = num * -1;
		digits += 1;
	}
	if (num >= 10)
	{
		digits = print_d_and_u(num / 10, digits);
		num = num % 10;
	}
	if (num < 10)
	{
		digits += 1;
		ft_putchar_fd('0' + num, 1);
	}
	return (digits);
}
