/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:16:17 by masashi           #+#    #+#             */
/*   Updated: 2021/09/14 16:28:31 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_format(va_list ap, const char *fmt)
{
	fmt++;
	if (*fmt == 'c')
		return (print_c(va_arg(ap, int)));
	else if (*fmt == 's')
		return (print_s(va_arg(ap, char *)));
	else if (*fmt == 'p')
		return (print_p(va_arg(ap, unsigned long)));
	 else if (*fmt == 'd' || *fmt == 'i')
		return (print_d_and_u(va_arg(ap, int), 0));
	 else if (*fmt == 'u')
		return (print_d_and_u(va_arg(ap, unsigned int), 0));
	else if (*fmt == 'x')
		return (print_x(va_arg(ap, unsigned int)));
	else if (*fmt == 'X')
		return (print_lx(va_arg(ap, unsigned int)));
	else if (*fmt == '%')
		return (print_percent());
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, fmt);
	count = 0;
	if (fmt == NULL)
		return (0);
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			count += put_format(ap, fmt);
			fmt++;
		}
		else
		{
			ft_putchar_fd(*fmt, 1);
			count++;
		}
		fmt++;
	}
	va_end(ap);
	return (count);
}
