/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:15:22 by masashi           #+#    #+#             */
/*   Updated: 2021/09/15 16:49:23 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putres(char *result)
{
	int	digits;
	int	i;

	digits = 0;
	i = 0;
	while (result[i] != '\0')
		i++;
	i--;
	while (result[i] != '\0')
	{
		digits += 1;
		ft_putchar_fd(result[i], 1);
		i--;
	}
	free(result);
	result = NULL;
	return (digits);
}

int	ft_puthex(unsigned long hex)
{
	char	*result;
	int		i;

	i = 0;
	if (hex == 0)
		return (put_zero());
	result = convert_dec_to_hexstr(hex);
	return (ft_putres(result));
}

int	print_p(unsigned long ptr)
{
	int	digits;

	digits = 2;
	ft_putstr("0x");
	digits += ft_puthex(ptr);
	return (digits);
}
