/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:16:17 by masashi           #+#    #+#             */
/*   Updated: 2021/09/08 17:12:59 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	printf("sss\n");
	ft_printf("sss %c %c", 'u', 'a');
	return (0);
}

void	put_format(va_list ap, const char *fmt)
{
	fmt++;
	if (*fmt == 'c')
		ft_putchar_fd(va_arg(ap, int), 1);
	else if (*fmt == 's')
		ft_putstr_fd(va_arg(ap, char *), 1);
	else if (*fmt == 'p')
	{
	}
	 else if (*fmt == 'd' || *fmt == 'i')
	{
	}
	 else if (*fmt == 'u')
	{
	}
	 else if (*fmt == 'x')
	{
	}
	 else if (*fmt == 'X')
	{
	}
	 else if (*fmt == '%')
	{
	}
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
			put_format(ap, fmt);
			fmt++;
		}
		else
		{
			ft_putchar_fd(*fmt, 1);
		}
		fmt++;
		count++;
	}
	va_end(ap);
	return (count);
}
