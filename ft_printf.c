/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:16:17 by mhirabay          #+#    #+#             */
/*   Updated: 2021/09/24 18:02:00 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_format(va_list vl, const char *fmt)
{
	fmt++;
	if (*fmt == 'c')
		return (ft_print_c(va_arg(vl, int)));
	else if (*fmt == 's')
		return (ft_print_s(va_arg(vl, char *)));
	else if (*fmt == 'p')
		return (ft_print_p(va_arg(vl, unsigned long)));
	 else if (*fmt == 'd' || *fmt == 'i')
		return (ft_print_d_and_u(va_arg(vl, int), 0));
	 else if (*fmt == 'u')
		return (ft_print_d_and_u(va_arg(vl, unsigned int), 0));
	else if (*fmt == 'x')
		return (ft_print_x(va_arg(vl, unsigned int)));
	else if (*fmt == 'X')
		return (ft_print_lx(va_arg(vl, unsigned int)));
	else if (*fmt == '%')
		return (ft_print_percent());
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	vl;
	int		count;

	va_start(vl, fmt);
	count = 0;
	if (fmt == NULL)
		return (0);
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			count += ft_put_format(vl, fmt);
			fmt++;
		}
		else
		{
			ft_putchar_fd(*fmt, 1);
			count++;
		}
		fmt++;
	}
	va_end(vl);
	return (count);
}
