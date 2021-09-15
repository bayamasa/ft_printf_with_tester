/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:16:17 by masashi           #+#    #+#             */
/*   Updated: 2021/09/15 18:00:47 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format(va_list vl, const char *fmt)
{
	fmt++;
	if (*fmt == 'c')
		return (print_c(va_arg(vl, int)));
	else if (*fmt == 's')
		return (print_s(va_arg(vl, char *)));
	else if (*fmt == 'p')
		return (print_p(va_arg(vl, unsigned long)));
	 else if (*fmt == 'd' || *fmt == 'i')
		return (print_d_and_u(va_arg(vl, int), 0));
	 else if (*fmt == 'u')
		return (print_d_and_u(va_arg(vl, unsigned int), 0));
	else if (*fmt == 'x')
		return (print_x(va_arg(vl, unsigned int)));
	else if (*fmt == 'X')
		return (print_lx(va_arg(vl, unsigned int)));
	else if (*fmt == '%')
		return (print_percent());
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
			count += put_format(vl, fmt);
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
